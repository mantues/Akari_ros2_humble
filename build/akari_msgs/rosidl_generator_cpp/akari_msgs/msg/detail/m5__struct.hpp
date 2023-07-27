// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__M5__STRUCT_HPP_
#define AKARI_MSGS__MSG__DETAIL__M5__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__akari_msgs__msg__M5 __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__msg__M5 __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct M5_
{
  using Type = M5_<ContainerAllocator>;

  explicit M5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button_a = false;
      this->button_b = false;
      this->button_c = false;
      this->din0 = false;
      this->din1 = false;
      this->ain0 = 0;
      this->dout0 = false;
      this->dout1 = false;
      this->pwmout0 = 0;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->brightness = 0;
      this->imu_ax = 0.0f;
      this->imu_ay = 0.0f;
      this->imu_az = 0.0f;
      this->imu_gx = 0.0f;
      this->imu_gy = 0.0f;
      this->imu_gz = 0.0f;
      this->imu_pitch = 0.0f;
      this->imu_roll = 0.0f;
      this->imu_yaw = 0.0f;
      this->general0 = 0.0f;
      this->general1 = 0.0f;
    }
  }

  explicit M5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button_a = false;
      this->button_b = false;
      this->button_c = false;
      this->din0 = false;
      this->din1 = false;
      this->ain0 = 0;
      this->dout0 = false;
      this->dout1 = false;
      this->pwmout0 = 0;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->brightness = 0;
      this->imu_ax = 0.0f;
      this->imu_ay = 0.0f;
      this->imu_az = 0.0f;
      this->imu_gx = 0.0f;
      this->imu_gy = 0.0f;
      this->imu_gz = 0.0f;
      this->imu_pitch = 0.0f;
      this->imu_roll = 0.0f;
      this->imu_yaw = 0.0f;
      this->general0 = 0.0f;
      this->general1 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _button_a_type =
    bool;
  _button_a_type button_a;
  using _button_b_type =
    bool;
  _button_b_type button_b;
  using _button_c_type =
    bool;
  _button_c_type button_c;
  using _din0_type =
    bool;
  _din0_type din0;
  using _din1_type =
    bool;
  _din1_type din1;
  using _ain0_type =
    uint16_t;
  _ain0_type ain0;
  using _dout0_type =
    bool;
  _dout0_type dout0;
  using _dout1_type =
    bool;
  _dout1_type dout1;
  using _pwmout0_type =
    uint8_t;
  _pwmout0_type pwmout0;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _brightness_type =
    uint16_t;
  _brightness_type brightness;
  using _imu_ax_type =
    float;
  _imu_ax_type imu_ax;
  using _imu_ay_type =
    float;
  _imu_ay_type imu_ay;
  using _imu_az_type =
    float;
  _imu_az_type imu_az;
  using _imu_gx_type =
    float;
  _imu_gx_type imu_gx;
  using _imu_gy_type =
    float;
  _imu_gy_type imu_gy;
  using _imu_gz_type =
    float;
  _imu_gz_type imu_gz;
  using _imu_pitch_type =
    float;
  _imu_pitch_type imu_pitch;
  using _imu_roll_type =
    float;
  _imu_roll_type imu_roll;
  using _imu_yaw_type =
    float;
  _imu_yaw_type imu_yaw;
  using _general0_type =
    float;
  _general0_type general0;
  using _general1_type =
    float;
  _general1_type general1;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__button_a(
    const bool & _arg)
  {
    this->button_a = _arg;
    return *this;
  }
  Type & set__button_b(
    const bool & _arg)
  {
    this->button_b = _arg;
    return *this;
  }
  Type & set__button_c(
    const bool & _arg)
  {
    this->button_c = _arg;
    return *this;
  }
  Type & set__din0(
    const bool & _arg)
  {
    this->din0 = _arg;
    return *this;
  }
  Type & set__din1(
    const bool & _arg)
  {
    this->din1 = _arg;
    return *this;
  }
  Type & set__ain0(
    const uint16_t & _arg)
  {
    this->ain0 = _arg;
    return *this;
  }
  Type & set__dout0(
    const bool & _arg)
  {
    this->dout0 = _arg;
    return *this;
  }
  Type & set__dout1(
    const bool & _arg)
  {
    this->dout1 = _arg;
    return *this;
  }
  Type & set__pwmout0(
    const uint8_t & _arg)
  {
    this->pwmout0 = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__pressure(
    const float & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__brightness(
    const uint16_t & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__imu_ax(
    const float & _arg)
  {
    this->imu_ax = _arg;
    return *this;
  }
  Type & set__imu_ay(
    const float & _arg)
  {
    this->imu_ay = _arg;
    return *this;
  }
  Type & set__imu_az(
    const float & _arg)
  {
    this->imu_az = _arg;
    return *this;
  }
  Type & set__imu_gx(
    const float & _arg)
  {
    this->imu_gx = _arg;
    return *this;
  }
  Type & set__imu_gy(
    const float & _arg)
  {
    this->imu_gy = _arg;
    return *this;
  }
  Type & set__imu_gz(
    const float & _arg)
  {
    this->imu_gz = _arg;
    return *this;
  }
  Type & set__imu_pitch(
    const float & _arg)
  {
    this->imu_pitch = _arg;
    return *this;
  }
  Type & set__imu_roll(
    const float & _arg)
  {
    this->imu_roll = _arg;
    return *this;
  }
  Type & set__imu_yaw(
    const float & _arg)
  {
    this->imu_yaw = _arg;
    return *this;
  }
  Type & set__general0(
    const float & _arg)
  {
    this->general0 = _arg;
    return *this;
  }
  Type & set__general1(
    const float & _arg)
  {
    this->general1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::msg::M5_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::msg::M5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::msg::M5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::msg::M5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::msg::M5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::msg::M5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::msg::M5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::msg::M5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::msg::M5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::msg::M5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__msg__M5
    std::shared_ptr<akari_msgs::msg::M5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__msg__M5
    std::shared_ptr<akari_msgs::msg::M5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const M5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->button_a != other.button_a) {
      return false;
    }
    if (this->button_b != other.button_b) {
      return false;
    }
    if (this->button_c != other.button_c) {
      return false;
    }
    if (this->din0 != other.din0) {
      return false;
    }
    if (this->din1 != other.din1) {
      return false;
    }
    if (this->ain0 != other.ain0) {
      return false;
    }
    if (this->dout0 != other.dout0) {
      return false;
    }
    if (this->dout1 != other.dout1) {
      return false;
    }
    if (this->pwmout0 != other.pwmout0) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->imu_ax != other.imu_ax) {
      return false;
    }
    if (this->imu_ay != other.imu_ay) {
      return false;
    }
    if (this->imu_az != other.imu_az) {
      return false;
    }
    if (this->imu_gx != other.imu_gx) {
      return false;
    }
    if (this->imu_gy != other.imu_gy) {
      return false;
    }
    if (this->imu_gz != other.imu_gz) {
      return false;
    }
    if (this->imu_pitch != other.imu_pitch) {
      return false;
    }
    if (this->imu_roll != other.imu_roll) {
      return false;
    }
    if (this->imu_yaw != other.imu_yaw) {
      return false;
    }
    if (this->general0 != other.general0) {
      return false;
    }
    if (this->general1 != other.general1) {
      return false;
    }
    return true;
  }
  bool operator!=(const M5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct M5_

// alias to use template instance with default allocator
using M5 =
  akari_msgs::msg::M5_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace akari_msgs

#endif  // AKARI_MSGS__MSG__DETAIL__M5__STRUCT_HPP_
