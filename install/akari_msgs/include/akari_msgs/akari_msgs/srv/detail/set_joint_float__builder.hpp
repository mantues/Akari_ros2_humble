// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetJointFloat.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_JOINT_FLOAT__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_JOINT_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_joint_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointFloat_Request_val
{
public:
  explicit Init_SetJointFloat_Request_val(::akari_msgs::srv::SetJointFloat_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetJointFloat_Request val(::akari_msgs::srv::SetJointFloat_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetJointFloat_Request msg_;
};

class Init_SetJointFloat_Request_joint_name
{
public:
  Init_SetJointFloat_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointFloat_Request_val joint_name(::akari_msgs::srv::SetJointFloat_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_SetJointFloat_Request_val(msg_);
  }

private:
  ::akari_msgs::srv::SetJointFloat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetJointFloat_Request>()
{
  return akari_msgs::srv::builder::Init_SetJointFloat_Request_joint_name();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointFloat_Response_result
{
public:
  Init_SetJointFloat_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetJointFloat_Response result(::akari_msgs::srv::SetJointFloat_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetJointFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetJointFloat_Response>()
{
  return akari_msgs::srv::builder::Init_SetJointFloat_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_JOINT_FLOAT__BUILDER_HPP_
