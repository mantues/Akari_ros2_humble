// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:srv/SetPwmout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__STRUCT_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetPwmout_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetPwmout_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPwmout_Request_
{
  using Type = SetPwmout_Request_<ContainerAllocator>;

  explicit SetPwmout_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_id = 0;
      this->val = 0;
    }
  }

  explicit SetPwmout_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_id = 0;
      this->val = 0;
    }
  }

  // field types and members
  using _pin_id_type =
    uint8_t;
  _pin_id_type pin_id;
  using _val_type =
    uint8_t;
  _val_type val;

  // setters for named parameter idiom
  Type & set__pin_id(
    const uint8_t & _arg)
  {
    this->pin_id = _arg;
    return *this;
  }
  Type & set__val(
    const uint8_t & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::srv::SetPwmout_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetPwmout_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetPwmout_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetPwmout_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetPwmout_Request
    std::shared_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetPwmout_Request
    std::shared_ptr<akari_msgs::srv::SetPwmout_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPwmout_Request_ & other) const
  {
    if (this->pin_id != other.pin_id) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPwmout_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPwmout_Request_

// alias to use template instance with default allocator
using SetPwmout_Request =
  akari_msgs::srv::SetPwmout_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetPwmout_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetPwmout_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPwmout_Response_
{
  using Type = SetPwmout_Response_<ContainerAllocator>;

  explicit SetPwmout_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetPwmout_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    akari_msgs::srv::SetPwmout_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetPwmout_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetPwmout_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetPwmout_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetPwmout_Response
    std::shared_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetPwmout_Response
    std::shared_ptr<akari_msgs::srv::SetPwmout_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPwmout_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPwmout_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPwmout_Response_

// alias to use template instance with default allocator
using SetPwmout_Response =
  akari_msgs::srv::SetPwmout_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs

namespace akari_msgs
{

namespace srv
{

struct SetPwmout
{
  using Request = akari_msgs::srv::SetPwmout_Request;
  using Response = akari_msgs::srv::SetPwmout_Response;
};

}  // namespace srv

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__STRUCT_HPP_