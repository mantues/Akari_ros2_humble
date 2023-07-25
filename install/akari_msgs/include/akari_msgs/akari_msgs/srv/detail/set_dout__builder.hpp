// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetDout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DOUT__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_DOUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_dout__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDout_Request_val
{
public:
  explicit Init_SetDout_Request_val(::akari_msgs::srv::SetDout_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetDout_Request val(::akari_msgs::srv::SetDout_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDout_Request msg_;
};

class Init_SetDout_Request_pin_id
{
public:
  Init_SetDout_Request_pin_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDout_Request_val pin_id(::akari_msgs::srv::SetDout_Request::_pin_id_type arg)
  {
    msg_.pin_id = std::move(arg);
    return Init_SetDout_Request_val(msg_);
  }

private:
  ::akari_msgs::srv::SetDout_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDout_Request>()
{
  return akari_msgs::srv::builder::Init_SetDout_Request_pin_id();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDout_Response_result
{
public:
  Init_SetDout_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetDout_Response result(::akari_msgs::srv::SetDout_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDout_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDout_Response>()
{
  return akari_msgs::srv::builder::Init_SetDout_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DOUT__BUILDER_HPP_
