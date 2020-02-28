// Generated by gencpp from file vrep_common/simRosGetArrayParameterResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETARRAYPARAMETERRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETARRAYPARAMETERRESPONSE_H


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
struct simRosGetArrayParameterResponse_
{
  typedef simRosGetArrayParameterResponse_<ContainerAllocator> Type;

  simRosGetArrayParameterResponse_()
    : result(0)
    , parameterValues()  {
    }
  simRosGetArrayParameterResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , parameterValues(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _parameterValues_type;
  _parameterValues_type parameterValues;





  typedef boost::shared_ptr< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetArrayParameterResponse_

typedef ::vrep_common::simRosGetArrayParameterResponse_<std::allocator<void> > simRosGetArrayParameterResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetArrayParameterResponse > simRosGetArrayParameterResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetArrayParameterResponse const> simRosGetArrayParameterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_simulation/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e497cd253c2e34372eda1afd9473563a";
  }

  static const char* value(const ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe497cd253c2e3437ULL;
  static const uint64_t static_value2 = 0x2eda1afd9473563aULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetArrayParameterResponse";
  }

  static const char* value(const ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
float32[] parameterValues\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.parameterValues);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetArrayParameterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetArrayParameterResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "parameterValues[]" << std::endl;
    for (size_t i = 0; i < v.parameterValues.size(); ++i)
    {
      s << indent << "  parameterValues[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.parameterValues[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETARRAYPARAMETERRESPONSE_H
