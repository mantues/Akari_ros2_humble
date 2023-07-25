// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/SetDisplayImage.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/set_display_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDisplayImage_Request_scale
{
public:
  explicit Init_SetDisplayImage_Request_scale(::akari_msgs::srv::SetDisplayImage_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::srv::SetDisplayImage_Request scale(::akari_msgs::srv::SetDisplayImage_Request::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayImage_Request msg_;
};

class Init_SetDisplayImage_Request_pos_y
{
public:
  explicit Init_SetDisplayImage_Request_pos_y(::akari_msgs::srv::SetDisplayImage_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayImage_Request_scale pos_y(::akari_msgs::srv::SetDisplayImage_Request::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_SetDisplayImage_Request_scale(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayImage_Request msg_;
};

class Init_SetDisplayImage_Request_pos_x
{
public:
  explicit Init_SetDisplayImage_Request_pos_x(::akari_msgs::srv::SetDisplayImage_Request & msg)
  : msg_(msg)
  {}
  Init_SetDisplayImage_Request_pos_y pos_x(::akari_msgs::srv::SetDisplayImage_Request::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_SetDisplayImage_Request_pos_y(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayImage_Request msg_;
};

class Init_SetDisplayImage_Request_filepath
{
public:
  Init_SetDisplayImage_Request_filepath()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDisplayImage_Request_pos_x filepath(::akari_msgs::srv::SetDisplayImage_Request::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return Init_SetDisplayImage_Request_pos_x(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDisplayImage_Request>()
{
  return akari_msgs::srv::builder::Init_SetDisplayImage_Request_filepath();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDisplayImage_Response_result
{
public:
  Init_SetDisplayImage_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::SetDisplayImage_Response result(::akari_msgs::srv::SetDisplayImage_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::SetDisplayImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::SetDisplayImage_Response>()
{
  return akari_msgs::srv::builder::Init_SetDisplayImage_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__BUILDER_HPP_
