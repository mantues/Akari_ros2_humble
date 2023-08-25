// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetDisplayText.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_display_text__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDisplayText_Request_refresh
{
public:
  explicit Init_SetDisplayText_Request_refresh(::akari_msgs::srv::SetDisplayText_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetDisplayText_Request refresh(::akari_msgs::srv::SetDisplayText_Request::_refresh_type arg)
  {
    msg_.refresh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

class Init_SetDisplayText_Request_back_color
{
public:
  explicit Init_SetDisplayText_Request_back_color(::akari_msgs::srv::SetDisplayText_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayText_Request_refresh back_color(::akari_msgs::srv::SetDisplayText_Request::_back_color_type arg)
  {
    msg_.back_color = std::move(arg);
    return Init_SetDisplayText_Request_refresh(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

class Init_SetDisplayText_Request_text_color
{
public:
  explicit Init_SetDisplayText_Request_text_color(::akari_msgs::srv::SetDisplayText_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayText_Request_back_color text_color(::akari_msgs::srv::SetDisplayText_Request::_text_color_type arg)
  {
    msg_.text_color = std::move(arg);
    return Init_SetDisplayText_Request_back_color(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

class Init_SetDisplayText_Request_size
{
public:
  explicit Init_SetDisplayText_Request_size(::akari_msgs::srv::SetDisplayText_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayText_Request_text_color size(::akari_msgs::srv::SetDisplayText_Request::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SetDisplayText_Request_text_color(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

class Init_SetDisplayText_Request_pos_y
{
public:
  explicit Init_SetDisplayText_Request_pos_y(::akari_msgs::srv::SetDisplayText_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayText_Request_size pos_y(::akari_msgs::srv::SetDisplayText_Request::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_SetDisplayText_Request_size(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

class Init_SetDisplayText_Request_pos_x
{
public:
  explicit Init_SetDisplayText_Request_pos_x(::akari_msgs::srv::SetDisplayText_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayText_Request_pos_y pos_x(::akari_msgs::srv::SetDisplayText_Request::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_SetDisplayText_Request_pos_y(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

class Init_SetDisplayText_Request_text
{
public:
  Init_SetDisplayText_Request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDisplayText_Request_pos_x text(::akari_msgs::srv::SetDisplayText_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_SetDisplayText_Request_pos_x(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDisplayText_Request>()
{
  return akari_msgs::srv::builder::Init_SetDisplayText_Request_text();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDisplayText_Response_result
{
public:
  Init_SetDisplayText_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetDisplayText_Response result(::akari_msgs::srv::SetDisplayText_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayText_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDisplayText_Response>()
{
  return akari_msgs::srv::builder::Init_SetDisplayText_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__BUILDER_HPP_
