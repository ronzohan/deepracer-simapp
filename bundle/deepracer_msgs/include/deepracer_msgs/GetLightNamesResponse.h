// Generated by gencpp from file deepracer_msgs/GetLightNamesResponse.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETLIGHTNAMESRESPONSE_H
#define DEEPRACER_MSGS_MESSAGE_GETLIGHTNAMESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepracer_msgs
{
template <class ContainerAllocator>
struct GetLightNamesResponse_
{
  typedef GetLightNamesResponse_<ContainerAllocator> Type;

  GetLightNamesResponse_()
    : light_names()
    , success(false)
    , status_message()  {
    }
  GetLightNamesResponse_(const ContainerAllocator& _alloc)
    : light_names(_alloc)
    , success(false)
    , status_message(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _light_names_type;
  _light_names_type light_names;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_message_type;
  _status_message_type status_message;





  typedef boost::shared_ptr< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetLightNamesResponse_

typedef ::deepracer_msgs::GetLightNamesResponse_<std::allocator<void> > GetLightNamesResponse;

typedef boost::shared_ptr< ::deepracer_msgs::GetLightNamesResponse > GetLightNamesResponsePtr;
typedef boost::shared_ptr< ::deepracer_msgs::GetLightNamesResponse const> GetLightNamesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.light_names == rhs.light_names &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6dff1e71fe0fb6f3d275724e4c746d5e";
  }

  static const char* value(const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6dff1e71fe0fb6f3ULL;
  static const uint64_t static_value2 = 0xd275724e4c746d5eULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/GetLightNamesResponse";
  }

  static const char* value(const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] light_names\n"
"bool success\n"
"string status_message\n"
;
  }

  static const char* value(const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.light_names);
      stream.next(m.success);
      stream.next(m.status_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetLightNamesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::GetLightNamesResponse_<ContainerAllocator>& v)
  {
    s << indent << "light_names[]" << std::endl;
    for (size_t i = 0; i < v.light_names.size(); ++i)
    {
      s << indent << "  light_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.light_names[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETLIGHTNAMESRESPONSE_H
