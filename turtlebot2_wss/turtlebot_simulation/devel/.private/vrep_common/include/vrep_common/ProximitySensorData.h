// Generated by gencpp from file vrep_common/ProximitySensorData.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_PROXIMITYSENSORDATA_H
#define VREP_COMMON_MESSAGE_PROXIMITYSENSORDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point32.h>
#include <std_msgs/Int32.h>
#include <geometry_msgs/Point32.h>

namespace vrep_common
{
template <class ContainerAllocator>
struct ProximitySensorData_
{
  typedef ProximitySensorData_<ContainerAllocator> Type;

  ProximitySensorData_()
    : detectedPoint()
    , detectedObject()
    , normalVector()  {
    }
  ProximitySensorData_(const ContainerAllocator& _alloc)
    : detectedPoint(_alloc)
    , detectedObject(_alloc)
    , normalVector(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _detectedPoint_type;
  _detectedPoint_type detectedPoint;

   typedef  ::std_msgs::Int32_<ContainerAllocator>  _detectedObject_type;
  _detectedObject_type detectedObject;

   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _normalVector_type;
  _normalVector_type normalVector;





  typedef boost::shared_ptr< ::vrep_common::ProximitySensorData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::ProximitySensorData_<ContainerAllocator> const> ConstPtr;

}; // struct ProximitySensorData_

typedef ::vrep_common::ProximitySensorData_<std::allocator<void> > ProximitySensorData;

typedef boost::shared_ptr< ::vrep_common::ProximitySensorData > ProximitySensorDataPtr;
typedef boost::shared_ptr< ::vrep_common::ProximitySensorData const> ProximitySensorDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::ProximitySensorData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::ProximitySensorData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_simulation/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::ProximitySensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::ProximitySensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::ProximitySensorData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca4cef31bef118238b22d9d3bc7e3089";
  }

  static const char* value(const ::vrep_common::ProximitySensorData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca4cef31bef11823ULL;
  static const uint64_t static_value2 = 0x8b22d9d3bc7e3089ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/ProximitySensorData";
  }

  static const char* value(const ::vrep_common::ProximitySensorData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point32 detectedPoint\n\
std_msgs/Int32 detectedObject\n\
geometry_msgs/Point32 normalVector\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: std_msgs/Int32\n\
int32 data\n\
";
  }

  static const char* value(const ::vrep_common::ProximitySensorData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detectedPoint);
      stream.next(m.detectedObject);
      stream.next(m.normalVector);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProximitySensorData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::ProximitySensorData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::ProximitySensorData_<ContainerAllocator>& v)
  {
    s << indent << "detectedPoint: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.detectedPoint);
    s << indent << "detectedObject: ";
    s << std::endl;
    Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "  ", v.detectedObject);
    s << indent << "normalVector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.normalVector);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_PROXIMITYSENSORDATA_H
