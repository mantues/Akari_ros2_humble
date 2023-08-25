// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
#define AKARI_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::Trigger_Request>()
{
  return ::akari_msgs::srv::Trigger_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Response_result
{
public:
  Init_Trigger_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::srv::Trigger_Response result(::akari_msgs::srv::Trigger_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::srv::Trigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::srv::Trigger_Response>()
{
  return akari_msgs::srv::builder::Init_Trigger_Response_result();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
