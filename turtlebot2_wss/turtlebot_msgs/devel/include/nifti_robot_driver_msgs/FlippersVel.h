// Generated by gencpp from file nifti_robot_driver_msgs/FlippersVel.msg
// DO NOT EDIT!


#ifndef NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_FLIPPERSVEL_H
#define NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_FLIPPERSVEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nifti_robot_driver_msgs
{
template <class ContainerAllocator>
struct FlippersVel_
{
  typedef FlippersVel_<ContainerAllocator> Type;

  FlippersVel_()
    : frontLeft(0.0)
    , frontRight(0.0)
    , rearLeft(0.0)
    , rearRight(0.0)  {
    }
  FlippersVel_(const ContainerAllocator& _alloc)
    : frontLeft(0.0)
    , frontRight(0.0)
    , rearLeft(0.0)
    , rearRight(0.0)  {
  (void)_alloc;
    }



   typedef double _frontLeft_type;
  _frontLeft_type frontLeft;

   typedef double _frontRight_type;
  _frontRight_type frontRight;

   typedef double _rearLeft_type;
  _rearLeft_type rearLeft;

   typedef double _rearRight_type;
  _rearRight_type rearRight;





  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> const> ConstPtr;

}; // struct FlippersVel_

typedef ::nifti_robot_driver_msgs::FlippersVel_<std::allocator<void> > FlippersVel;

typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersVel > FlippersVelPtr;
typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersVel const> FlippersVelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nifti_robot_driver_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'nifti_robot_driver_msgs': ['/home/youssef/ROCO506Z/turtlebot2_wss/turtlebot_msgs/src/nifti_robot_driver_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e95d6456aca0895fd90cacc4b232a69";
  }

  static const char* value(const ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e95d6456aca0895ULL;
  static const uint64_t static_value2 = 0xfd90cacc4b232a69ULL;
};

template<class ContainerAllocator>
struct DataType< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nifti_robot_driver_msgs/FlippersVel";
  }

  static const char* value(const ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 frontLeft\n\
float64 frontRight\n\
float64 rearLeft\n\
float64 rearRight\n\
";
  }

  static const char* value(const ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frontLeft);
      stream.next(m.frontRight);
      stream.next(m.rearLeft);
      stream.next(m.rearRight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlippersVel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nifti_robot_driver_msgs::FlippersVel_<ContainerAllocator>& v)
  {
    s << indent << "frontLeft: ";
    Printer<double>::stream(s, indent + "  ", v.frontLeft);
    s << indent << "frontRight: ";
    Printer<double>::stream(s, indent + "  ", v.frontRight);
    s << indent << "rearLeft: ";
    Printer<double>::stream(s, indent + "  ", v.rearLeft);
    s << indent << "rearRight: ";
    Printer<double>::stream(s, indent + "  ", v.rearRight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_FLIPPERSVEL_H
