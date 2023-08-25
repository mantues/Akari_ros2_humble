// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetJointBool.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_joint_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointBool_Request_val
{
public:
  explicit Init_SetJointBool_Request_val(::akari_msgs::srv::SetJointBool_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetJointBool_Request val(::akari_msgs::srv::SetJointBool_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetJointBool_Request msg_;
};

class Init_SetJointBool_Request_joint_name
{
public:
  Init_SetJointBool_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointBool_Request_val joint_name(::akari_msgs::srv::SetJointBool_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_SetJointBool_Request_val(msg_);
  }

private:
  ::akari_msgs::srv::SetJointBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetJointBool_Request>()
{
  return akari_msgs::srv::builder::Init_SetJointBool_Request_joint_name();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointBool_Response_result
{
public:
  Init_SetJointBool_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetJointBool_Response result(::akari_msgs::srv::SetJointBool_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetJointBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetJointBool_Response>()
{
  return akari_msgs::srv::builder::Init_SetJointBool_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__BUILDER_HPP_
