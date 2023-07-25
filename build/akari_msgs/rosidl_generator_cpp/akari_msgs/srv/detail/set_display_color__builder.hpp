// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetDisplayColor.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_COLOR__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_display_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDisplayColor_Request_color_var
{
public:
  explicit Init_SetDisplayColor_Request_color_var(::akari_msgs::srv::SetDisplayColor_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetDisplayColor_Request color_var(::akari_msgs::srv::SetDisplayColor_Request::_color_var_type arg)
  {
    msg_.color_var = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayColor_Request msg_;
};

class Init_SetDisplayColor_Request_color
{
public:
  Init_SetDisplayColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDisplayColor_Request_color_var color(::akari_msgs::srv::SetDisplayColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_SetDisplayColor_Request_color_var(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDisplayColor_Request>()
{
  return akari_msgs::srv::builder::Init_SetDisplayColor_Request_color();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDisplayColor_Response_result
{
public:
  Init_SetDisplayColor_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetDisplayColor_Response result(::akari_msgs::srv::SetDisplayColor_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDisplayColor_Response>()
{
  return akari_msgs::srv::builder::Init_SetDisplayColor_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_COLOR__BUILDER_HPP_
