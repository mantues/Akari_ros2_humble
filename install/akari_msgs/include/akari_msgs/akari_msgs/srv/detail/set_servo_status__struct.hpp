// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:srv/SetServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__STRUCT_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetServoStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetServoStatus_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetServoStatus_Request_
{
  using Type = SetServoStatus_Request_<ContainerAllocator>;

  explicit SetServoStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->joint_vel_val = 0.0f;
      this->joint_acc_val = 0.0f;
      this->servo_enable = false;
    }
  }

  explicit SetServoStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->joint_vel_val = 0.0f;
      this->joint_acc_val = 0.0f;
      this->servo_enable = false;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _joint_name_array_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_array_type joint_name_array;
  using _joint_vel_val_type =
    float;
  _joint_vel_val_type joint_vel_val;
  using _joint_vel_array_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_vel_array_type joint_vel_array;
  using _joint_acc_val_type =
    float;
  _joint_acc_val_type joint_acc_val;
  using _joint_acc_array_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_acc_array_type joint_acc_array;
  using _servo_enable_type =
    bool;
  _servo_enable_type servo_enable;
  using _servo_enable_array_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _servo_enable_array_type servo_enable_array;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__joint_name_array(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name_array = _arg;
    return *this;
  }
  Type & set__joint_vel_val(
    const float & _arg)
  {
    this->joint_vel_val = _arg;
    return *this;
  }
  Type & set__joint_vel_array(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_vel_array = _arg;
    return *this;
  }
  Type & set__joint_acc_val(
    const float & _arg)
  {
    this->joint_acc_val = _arg;
    return *this;
  }
  Type & set__joint_acc_array(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_acc_array = _arg;
    return *this;
  }
  Type & set__servo_enable(
    const bool & _arg)
  {
    this->servo_enable = _arg;
    return *this;
  }
  Type & set__servo_enable_array(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->servo_enable_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetServoStatus_Request
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetServoStatus_Request
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetServoStatus_Request_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->joint_name_array != other.joint_name_array) {
      return false;
    }
    if (this->joint_vel_val != other.joint_vel_val) {
      return false;
    }
    if (this->joint_vel_array != other.joint_vel_array) {
      return false;
    }
    if (this->joint_acc_val != other.joint_acc_val) {
      return false;
    }
    if (this->joint_acc_array != other.joint_acc_array) {
      return false;
    }
    if (this->servo_enable != other.servo_enable) {
      return false;
    }
    if (this->servo_enable_array != other.servo_enable_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetServoStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetServoStatus_Request_

// alias to use template instance with default allocator
using SetServoStatus_Request =
  akari_msgs::srv::SetServoStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetServoStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetServoStatus_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetServoStatus_Response_
{
  using Type = SetServoStatus_Response_<ContainerAllocator>;

  explicit SetServoStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetServoStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetServoStatus_Response
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetServoStatus_Response
    std::shared_ptr<akari_msgs::srv::SetServoStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetServoStatus_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetServoStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetServoStatus_Response_

// alias to use template instance with default allocator
using SetServoStatus_Response =
  akari_msgs::srv::SetServoStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs

namespace akari_msgs
{

namespace srv
{

struct SetServoStatus
{
  using Request = akari_msgs::srv::SetServoStatus_Request;
  using Response = akari_msgs::srv::SetServoStatus_Response;
};

}  // namespace srv

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__STRUCT_HPP_
