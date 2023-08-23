// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_servo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServoStatus_Request_servo_enable_array
{
public:
  explicit Init_SetServoStatus_Request_servo_enable_array(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetServoStatus_Request servo_enable_array(::akari_msgs::srv::SetServoStatus_Request::_servo_enable_array_type arg)
  {
    msg_.servo_enable_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_servo_enable
{
public:
  explicit Init_SetServoStatus_Request_servo_enable(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SetServoStatus_Request_servo_enable_array servo_enable(::akari_msgs::srv::SetServoStatus_Request::_servo_enable_type arg)
  {
    msg_.servo_enable = std::move(arg);
    return Init_SetServoStatus_Request_servo_enable_array(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_joint_acc_array
{
public:
  explicit Init_SetServoStatus_Request_joint_acc_array(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SetServoStatus_Request_servo_enable joint_acc_array(::akari_msgs::srv::SetServoStatus_Request::_joint_acc_array_type arg)
  {
    msg_.joint_acc_array = std::move(arg);
    return Init_SetServoStatus_Request_servo_enable(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_joint_acc_val
{
public:
  explicit Init_SetServoStatus_Request_joint_acc_val(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SetServoStatus_Request_joint_acc_array joint_acc_val(::akari_msgs::srv::SetServoStatus_Request::_joint_acc_val_type arg)
  {
    msg_.joint_acc_val = std::move(arg);
    return Init_SetServoStatus_Request_joint_acc_array(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_joint_vel_array
{
public:
  explicit Init_SetServoStatus_Request_joint_vel_array(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SetServoStatus_Request_joint_acc_val joint_vel_array(::akari_msgs::srv::SetServoStatus_Request::_joint_vel_array_type arg)
  {
    msg_.joint_vel_array = std::move(arg);
    return Init_SetServoStatus_Request_joint_acc_val(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_joint_vel_val
{
public:
  explicit Init_SetServoStatus_Request_joint_vel_val(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SetServoStatus_Request_joint_vel_array joint_vel_val(::akari_msgs::srv::SetServoStatus_Request::_joint_vel_val_type arg)
  {
    msg_.joint_vel_val = std::move(arg);
    return Init_SetServoStatus_Request_joint_vel_array(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_joint_name_array
{
public:
  explicit Init_SetServoStatus_Request_joint_name_array(::akari_msgs::srv::SetServoStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SetServoStatus_Request_joint_vel_val joint_name_array(::akari_msgs::srv::SetServoStatus_Request::_joint_name_array_type arg)
  {
    msg_.joint_name_array = std::move(arg);
    return Init_SetServoStatus_Request_joint_vel_val(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

class Init_SetServoStatus_Request_joint_name
{
public:
  Init_SetServoStatus_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServoStatus_Request_joint_name_array joint_name(::akari_msgs::srv::SetServoStatus_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_SetServoStatus_Request_joint_name_array(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetServoStatus_Request>()
{
  return akari_msgs::srv::builder::Init_SetServoStatus_Request_joint_name();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetServoStatus_Response_result
{
public:
  Init_SetServoStatus_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetServoStatus_Response result(::akari_msgs::srv::SetServoStatus_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetServoStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetServoStatus_Response>()
{
  return akari_msgs::srv::builder::Init_SetServoStatus_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__BUILDER_HPP_
