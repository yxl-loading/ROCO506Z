// Generated by gencpp from file vrep_common/simRosGetModelPropertyResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETMODELPROPERTYRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETMODELPROPERTYRESPONSE_H


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
struct simRosGetModelPropertyResponse_
{
  typedef simRosGetModelPropertyResponse_<ContainerAllocator> Type;

  simRosGetModelPropertyResponse_()
    : propertyValue(0)  {
    }
  simRosGetModelPropertyResponse_(const ContainerAllocator& _alloc)
    : propertyValue(0)  {
  (void)_alloc;
    }



   typedef int32_t _propertyValue_type;
  _propertyValue_type propertyValue;





  typedef boost::shared_ptr< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetModelPropertyResponse_

typedef ::vrep_common::simRosGetModelPropertyResponse_<std::allocator<void> > simRosGetModelPropertyResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetModelPropertyResponse > simRosGetModelPropertyResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetModelPropertyResponse const> simRosGetModelPropertyResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/youssef/ROCO506Z/turtlebot2_wss/turtlebot_simulation/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3ff7a3737260dba8d61537cf18cc60a";
  }

  static const char* value(const ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3ff7a3737260dbaULL;
  static const uint64_t static_value2 = 0x8d61537cf18cc60aULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetModelPropertyResponse";
  }

  static const char* value(const ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 propertyValue\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.propertyValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetModelPropertyResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetModelPropertyResponse_<ContainerAllocator>& v)
  {
    s << indent << "propertyValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.propertyValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETMODELPROPERTYRESPONSE_H
