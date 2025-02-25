#!/bin/bash
trap ctrl_c INT

function ctrl_c() {
        echo "Requested to stop."
        exit 1
}

PREFIX="awsdeepracercommunity"
ARCH="cpu-avx cpu-avx2 cpu-gl-avx cpu-gl-avx2 gpu gpu-gl"
TF_PATH='https://larsll-build-artifact-share.s3.eu-north-1.amazonaws.com/tensorflow/${arch_secondary}/tensorflow-1.12.3-cp36-cp36m-linux_x86_64.whl'

while getopts ":a:fp:t:" opt; do
case $opt in
a) ARCH="$OPTARG"
;;
p) PREFIX="$OPTARG"
;;
t) TF_PATH="$OPTARG"
;;
f) OPT_NOCACHE="--no-cache"
;;
\?) echo "Invalid option -$OPTARG" >&2
exit 1
;;
esac
done

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
VERSION=$(cat $DIR/VERSION)

echo "Preparing docker images for [$ARCH]"

for a in $ARCH; do 

    if [ -n "$(echo $a | gawk '/cpu/')" ]; then 
        if [ -n "$(echo $a | gawk '/cpu-gl/')" ]; then 
            arch_primary="cpu-gl"
        else
            arch_primary="cpu"
        fi           

        arch_secondary="$(echo $a | gawk 'match($0, /(cpu)(-gl)?-(.*)/, m) { print m[3] }' )"
        tf=$(eval echo $TF_PATH)
        arch_tag="$arch_primary-$arch_secondary"

    elif [ -n "$(echo $a | gawk '/gpu/')" ]; then 
        arch_primary=$a
        arch_tag=$a
        tf="tensorflow-gpu==1.13.1"

    else
        echo "Architecture $a unknown."
    fi

    set -x
    docker build . ${OPT_NOCACHE} -t $PREFIX/deepracer-robomaker:${VERSION}-${arch_tag} -f docker/Dockerfile.${arch_primary} --build-arg TENSORFLOW_VER=$tf --build-arg IMG_VERSION=$VERSION
    set +x

done
