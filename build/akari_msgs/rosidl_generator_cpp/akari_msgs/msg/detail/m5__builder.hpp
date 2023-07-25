// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__M5__BUILDER_HPP_
#define AKARI_MSGS__MSG__DETAIL__M5__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/msg/detail/m5__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace msg
{

namespace builder
{

class Init_M5_general1
{
public:
  explicit Init_M5_general1(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  ::akari_msgs::msg::M5 general1(::akari_msgs::msg::M5::_general1_type arg)
  {
    msg_.general1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_general0
{
public:
  explicit Init_M5_general0(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_general1 general0(::akari_msgs::msg::M5::_general0_type arg)
  {
    msg_.general0 = std::move(arg);
    return Init_M5_general1(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_yaw
{
public:
  explicit Init_M5_imu_yaw(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_general0 imu_yaw(::akari_msgs::msg::M5::_imu_yaw_type arg)
  {
    msg_.imu_yaw = std::move(arg);
    return Init_M5_general0(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_roll
{
public:
  explicit Init_M5_imu_roll(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_yaw imu_roll(::akari_msgs::msg::M5::_imu_roll_type arg)
  {
    msg_.imu_roll = std::move(arg);
    return Init_M5_imu_yaw(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_pitch
{
public:
  explicit Init_M5_imu_pitch(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_roll imu_pitch(::akari_msgs::msg::M5::_imu_pitch_type arg)
  {
    msg_.imu_pitch = std::move(arg);
    return Init_M5_imu_roll(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_gz
{
public:
  explicit Init_M5_imu_gz(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_pitch imu_gz(::akari_msgs::msg::M5::_imu_gz_type arg)
  {
    msg_.imu_gz = std::move(arg);
    return Init_M5_imu_pitch(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_gy
{
public:
  explicit Init_M5_imu_gy(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_gz imu_gy(::akari_msgs::msg::M5::_imu_gy_type arg)
  {
    msg_.imu_gy = std::move(arg);
    return Init_M5_imu_gz(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_gx
{
public:
  explicit Init_M5_imu_gx(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_gy imu_gx(::akari_msgs::msg::M5::_imu_gx_type arg)
  {
    msg_.imu_gx = std::move(arg);
    return Init_M5_imu_gy(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_az
{
public:
  explicit Init_M5_imu_az(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_gx imu_az(::akari_msgs::msg::M5::_imu_az_type arg)
  {
    msg_.imu_az = std::move(arg);
    return Init_M5_imu_gx(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_ay
{
public:
  explicit Init_M5_imu_ay(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_az imu_ay(::akari_msgs::msg::M5::_imu_ay_type arg)
  {
    msg_.imu_ay = std::move(arg);
    return Init_M5_imu_az(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_imu_ax
{
public:
  explicit Init_M5_imu_ax(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_ay imu_ax(::akari_msgs::msg::M5::_imu_ax_type arg)
  {
    msg_.imu_ax = std::move(arg);
    return Init_M5_imu_ay(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_brightness
{
public:
  explicit Init_M5_brightness(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_imu_ax brightness(::akari_msgs::msg::M5::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_M5_imu_ax(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_pressure
{
public:
  explicit Init_M5_pressure(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_brightness pressure(::akari_msgs::msg::M5::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_M5_brightness(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_temperature
{
public:
  explicit Init_M5_temperature(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_pressure temperature(::akari_msgs::msg::M5::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_M5_pressure(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_pwmout0
{
public:
  explicit Init_M5_pwmout0(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_temperature pwmout0(::akari_msgs::msg::M5::_pwmout0_type arg)
  {
    msg_.pwmout0 = std::move(arg);
    return Init_M5_temperature(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_dout1
{
public:
  explicit Init_M5_dout1(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_pwmout0 dout1(::akari_msgs::msg::M5::_dout1_type arg)
  {
    msg_.dout1 = std::move(arg);
    return Init_M5_pwmout0(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_dout0
{
public:
  explicit Init_M5_dout0(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_dout1 dout0(::akari_msgs::msg::M5::_dout0_type arg)
  {
    msg_.dout0 = std::move(arg);
    return Init_M5_dout1(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_ain0
{
public:
  explicit Init_M5_ain0(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_dout0 ain0(::akari_msgs::msg::M5::_ain0_type arg)
  {
    msg_.ain0 = std::move(arg);
    return Init_M5_dout0(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_din1
{
public:
  explicit Init_M5_din1(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_ain0 din1(::akari_msgs::msg::M5::_din1_type arg)
  {
    msg_.din1 = std::move(arg);
    return Init_M5_ain0(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_din0
{
public:
  explicit Init_M5_din0(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_din1 din0(::akari_msgs::msg::M5::_din0_type arg)
  {
    msg_.din0 = std::move(arg);
    return Init_M5_din1(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_button_c
{
public:
  explicit Init_M5_button_c(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_din0 button_c(::akari_msgs::msg::M5::_button_c_type arg)
  {
    msg_.button_c = std::move(arg);
    return Init_M5_din0(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_button_b
{
public:
  explicit Init_M5_button_b(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_button_c button_b(::akari_msgs::msg::M5::_button_b_type arg)
  {
    msg_.button_b = std::move(arg);
    return Init_M5_button_c(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_button_a
{
public:
  explicit Init_M5_button_a(::akari_msgs::msg::M5 & msg)
  : msg_(msg)
  {}
  Init_M5_button_b button_a(::akari_msgs::msg::M5::_button_a_type arg)
  {
    msg_.button_a = std::move(arg);
    return Init_M5_button_b(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

class Init_M5_header
{
public:
  Init_M5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_M5_button_a header(::akari_msgs::msg::M5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_M5_button_a(msg_);
  }

private:
  ::akari_msgs::msg::M5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::msg::M5>()
{
  return akari_msgs::msg::builder::Init_M5_header();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__MSG__DETAIL__M5__BUILDER_HPP_
