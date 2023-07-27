// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetAllout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_ALLOUT__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_ALLOUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_allout__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAllout_Request_pwmout0_val
{
public:
  explicit Init_SetAllout_Request_pwmout0_val(::akari_msgs::srv::SetAllout_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetAllout_Request pwmout0_val(::akari_msgs::srv::SetAllout_Request::_pwmout0_val_type arg)
  {
    msg_.pwmout0_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetAllout_Request msg_;
};

class Init_SetAllout_Request_dout1_val
{
public:
  explicit Init_SetAllout_Request_dout1_val(::akari_msgs::srv::SetAllout_Request & msg)
  : msg_(msg)
  {}
  Init_SetAllout_Request_pwmout0_val dout1_val(::akari_msgs::srv::SetAllout_Request::_dout1_val_type arg)
  {
    msg_.dout1_val = std::move(arg);
    return Init_SetAllout_Request_pwmout0_val(msg_);
  }

private:
  ::akari_msgs::srv::SetAllout_Request msg_;
};

class Init_SetAllout_Request_dout0_val
{
public:
  Init_SetAllout_Request_dout0_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAllout_Request_dout1_val dout0_val(::akari_msgs::srv::SetAllout_Request::_dout0_val_type arg)
  {
    msg_.dout0_val = std::move(arg);
    return Init_SetAllout_Request_dout1_val(msg_);
  }

private:
  ::akari_msgs::srv::SetAllout_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetAllout_Request>()
{
  return akari_msgs::srv::builder::Init_SetAllout_Request_dout0_val();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAllout_Response_result
{
public:
  Init_SetAllout_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetAllout_Response result(::akari_msgs::srv::SetAllout_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetAllout_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetAllout_Response>()
{
  return akari_msgs::srv::builder::Init_SetAllout_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_ALLOUT__BUILDER_HPP_
