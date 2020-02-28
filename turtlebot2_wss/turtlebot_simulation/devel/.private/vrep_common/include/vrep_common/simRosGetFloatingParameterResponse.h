// Generated by gencpp from file vrep_common/simRosGetFloatingParameterResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETFLOATINGPARAMETERRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETFLOATINGPARAMETERRESPONSE_H


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
struct simRosGetFloatingParameterResponse_
{
  typedef simRosGetFloatingParameterResponse_<ContainerAllocator> Type;

  simRosGetFloatingParameterResponse_()
    : result(0)
    , parameterValue(0.0)  {
    }
  simRosGetFloatingParameterResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , parameterValue(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _parameterValue_type;
  _parameterValue_type parameterValue;





  typedef boost::shared_ptr< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetFloatingParameterResponse_

typedef ::vrep_common::simRosGetFloatingParameterResponse_<std::allocator<void> > simRosGetFloatingParameterResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetFloatingParameterResponse > simRosGetFloatingParameterResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetFloatingParameterResponse const> simRosGetFloatingParameterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f3b3d2d178d987bbf7b54667db48dc8";
  }

  static const char* value(const ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f3b3d2d178d987bULL;
  static const uint64_t static_value2 = 0xbf7b54667db48dc8ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetFloatingParameterResponse";
  }

  static const char* value(const ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
float32 parameterValue\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.parameterValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetFloatingParameterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetFloatingParameterResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "parameterValue: ";
    Printer<float>::stream(s, indent + "  ", v.parameterValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETFLOATINGPARAMETERRESPONSE_H
