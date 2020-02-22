// Generated by gencpp from file vrep_common/simRosGetJointMatrix.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIX_H
#define VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIX_H

#include <ros/service_traits.h>


#include <vrep_common/simRosGetJointMatrixRequest.h>
#include <vrep_common/simRosGetJointMatrixResponse.h>


namespace vrep_common
{

struct simRosGetJointMatrix
{

typedef simRosGetJointMatrixRequest Request;
typedef simRosGetJointMatrixResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosGetJointMatrix
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosGetJointMatrix > {
  static const char* value()
  {
    return "a4cf19b442f7dd0e7c71aebcc49e75d2";
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrix&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosGetJointMatrix > {
  static const char* value()
  {
    return "vrep_common/simRosGetJointMatrix";
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrix&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosGetJointMatrixRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosGetJointMatrix > 
template<>
struct MD5Sum< ::vrep_common::simRosGetJointMatrixRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetJointMatrix >::value();
  }
  static const char* value(const ::vrep_common::simRosGetJointMatrixRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetJointMatrixRequest> should match 
// service_traits::DataType< ::vrep_common::simRosGetJointMatrix > 
template<>
struct DataType< ::vrep_common::simRosGetJointMatrixRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetJointMatrix >::value();
  }
  static const char* value(const ::vrep_common::simRosGetJointMatrixRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosGetJointMatrixResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosGetJointMatrix > 
template<>
struct MD5Sum< ::vrep_common::simRosGetJointMatrixResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetJointMatrix >::value();
  }
  static const char* value(const ::vrep_common::simRosGetJointMatrixResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetJointMatrixResponse> should match 
// service_traits::DataType< ::vrep_common::simRosGetJointMatrix > 
template<>
struct DataType< ::vrep_common::simRosGetJointMatrixResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetJointMatrix >::value();
  }
  static const char* value(const ::vrep_common::simRosGetJointMatrixResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIX_H
