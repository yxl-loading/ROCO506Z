// Generated by gencpp from file vrep_common/simRosEnableSubscriberRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSENABLESUBSCRIBERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSENABLESUBSCRIBERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosEnableSubscriberRequest_
{
  typedef simRosEnableSubscriberRequest_<ContainerAllocator> Type;

  simRosEnableSubscriberRequest_()
    : topicName()
    , queueSize(0)
    , streamCmd(0)
    , auxInt1(0)
    , auxInt2(0)
    , auxString()  {
    }
  simRosEnableSubscriberRequest_(const ContainerAllocator& _alloc)
    : topicName(_alloc)
    , queueSize(0)
    , streamCmd(0)
    , auxInt1(0)
    , auxInt2(0)
    , auxString(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topicName_type;
  _topicName_type topicName;

   typedef int32_t _queueSize_type;
  _queueSize_type queueSize;

   typedef int32_t _streamCmd_type;
  _streamCmd_type streamCmd;

   typedef int32_t _auxInt1_type;
  _auxInt1_type auxInt1;

   typedef int32_t _auxInt2_type;
  _auxInt2_type auxInt2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _auxString_type;
  _auxString_type auxString;





  typedef boost::shared_ptr< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosEnableSubscriberRequest_

typedef ::vrep_common::simRosEnableSubscriberRequest_<std::allocator<void> > simRosEnableSubscriberRequest;

typedef boost::shared_ptr< ::vrep_common::simRosEnableSubscriberRequest > simRosEnableSubscriberRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosEnableSubscriberRequest const> simRosEnableSubscriberRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/youssef/ROCO506Z/turtlebot2_wss/turtlebot_simulation/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7df7c248dc5801f9f5b98f61f3741b8";
  }

  static const char* value(const ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7df7c248dc5801fULL;
  static const uint64_t static_value2 = 0x9f5b98f61f3741b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosEnableSubscriberRequest";
  }

  static const char* value(const ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string topicName\n\
int32 queueSize\n\
int32 streamCmd\n\
int32 auxInt1\n\
int32 auxInt2\n\
string auxString\n\
";
  }

  static const char* value(const ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topicName);
      stream.next(m.queueSize);
      stream.next(m.streamCmd);
      stream.next(m.auxInt1);
      stream.next(m.auxInt2);
      stream.next(m.auxString);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosEnableSubscriberRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosEnableSubscriberRequest_<ContainerAllocator>& v)
  {
    s << indent << "topicName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topicName);
    s << indent << "queueSize: ";
    Printer<int32_t>::stream(s, indent + "  ", v.queueSize);
    s << indent << "streamCmd: ";
    Printer<int32_t>::stream(s, indent + "  ", v.streamCmd);
    s << indent << "auxInt1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.auxInt1);
    s << indent << "auxInt2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.auxInt2);
    s << indent << "auxString: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.auxString);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSENABLESUBSCRIBERREQUEST_H
