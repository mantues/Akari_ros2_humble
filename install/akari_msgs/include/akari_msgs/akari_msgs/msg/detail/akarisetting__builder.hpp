// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__AKARISETTING__BUILDER_HPP_
#define AKARI_MSGS__MSG__DETAIL__AKARISETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/msg/detail/akarisetting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace msg
{

namespace builder
{

class Init_Akarisetting_servomovingstate
{
public:
  explicit Init_Akarisetting_servomovingstate(::akari_msgs::msg::Akarisetting & msg)
  : msg_(msg)
  {}
  ::akari_msgs::msg::Akarisetting servomovingstate(::akari_msgs::msg::Akarisetting::_servomovingstate_type arg)
  {
    msg_.servomovingstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

class Init_Akarisetting_servoenabled
{
public:
  explicit Init_Akarisetting_servoenabled(::akari_msgs::msg::Akarisetting & msg)
  : msg_(msg)
  {}
  Init_Akarisetting_servomovingstate servoenabled(::akari_msgs::msg::Akarisetting::_servoenabled_type arg)
  {
    msg_.servoenabled = std::move(arg);
    return Init_Akarisetting_servomovingstate(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

class Init_Akarisetting_jointaccelerations
{
public:
  explicit Init_Akarisetting_jointaccelerations(::akari_msgs::msg::Akarisetting & msg)
  : msg_(msg)
  {}
  Init_Akarisetting_servoenabled jointaccelerations(::akari_msgs::msg::Akarisetting::_jointaccelerations_type arg)
  {
    msg_.jointaccelerations = std::move(arg);
    return Init_Akarisetting_servoenabled(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

class Init_Akarisetting_jointvelocities
{
public:
  explicit Init_Akarisetting_jointvelocities(::akari_msgs::msg::Akarisetting & msg)
  : msg_(msg)
  {}
  Init_Akarisetting_jointaccelerations jointvelocities(::akari_msgs::msg::Akarisetting::_jointvelocities_type arg)
  {
    msg_.jointvelocities = std::move(arg);
    return Init_Akarisetting_jointaccelerations(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

class Init_Akarisetting_jointpositions
{
public:
  explicit Init_Akarisetting_jointpositions(::akari_msgs::msg::Akarisetting & msg)
  : msg_(msg)
  {}
  Init_Akarisetting_jointvelocities jointpositions(::akari_msgs::msg::Akarisetting::_jointpositions_type arg)
  {
    msg_.jointpositions = std::move(arg);
    return Init_Akarisetting_jointvelocities(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

class Init_Akarisetting_jointname
{
public:
  explicit Init_Akarisetting_jointname(::akari_msgs::msg::Akarisetting & msg)
  : msg_(msg)
  {}
  Init_Akarisetting_jointpositions jointname(::akari_msgs::msg::Akarisetting::_jointname_type arg)
  {
    msg_.jointname = std::move(arg);
    return Init_Akarisetting_jointpositions(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

class Init_Akarisetting_header
{
public:
  Init_Akarisetting_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Akarisetting_jointname header(::akari_msgs::msg::Akarisetting::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Akarisetting_jointname(msg_);
  }

private:
  ::akari_msgs::msg::Akarisetting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::msg::Akarisetting>()
{
  return akari_msgs::msg::builder::Init_Akarisetting_header();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__MSG__DETAIL__AKARISETTING__BUILDER_HPP_
