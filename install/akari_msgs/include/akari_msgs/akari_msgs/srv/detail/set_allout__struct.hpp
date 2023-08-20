// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:srv/SetAllout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_ALLOUT__STRUCT_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_ALLOUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetAllout_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetAllout_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAllout_Request_
{
  using Type = SetAllout_Request_<ContainerAllocator>;

  explicit SetAllout_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dout0_val = false;
      this->dout1_val = false;
      this->pwmout0_val = 0;
    }
  }

  explicit SetAllout_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dout0_val = false;
      this->dout1_val = false;
      this->pwmout0_val = 0;
    }
  }

  // field types and members
  using _dout0_val_type =
    bool;
  _dout0_val_type dout0_val;
  using _dout1_val_type =
    bool;
  _dout1_val_type dout1_val;
  using _pwmout0_val_type =
    uint8_t;
  _pwmout0_val_type pwmout0_val;

  // setters for named parameter idiom
  Type & set__dout0_val(
    const bool & _arg)
  {
    this->dout0_val = _arg;
    return *this;
  }
  Type & set__dout1_val(
    const bool & _arg)
  {
    this->dout1_val = _arg;
    return *this;
  }
  Type & set__pwmout0_val(
    const uint8_t & _arg)
  {
    this->pwmout0_val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::srv::SetAllout_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetAllout_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetAllout_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetAllout_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetAllout_Request
    std::shared_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetAllout_Request
    std::shared_ptr<akari_msgs::srv::SetAllout_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAllout_Request_ & other) const
  {
    if (this->dout0_val != other.dout0_val) {
      return false;
    }
    if (this->dout1_val != other.dout1_val) {
      return false;
    }
    if (this->pwmout0_val != other.pwmout0_val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAllout_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAllout_Request_

// alias to use template instance with default allocator
using SetAllout_Request =
  akari_msgs::srv::SetAllout_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetAllout_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetAllout_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAllout_Response_
{
  using Type = SetAllout_Response_<ContainerAllocator>;

  explicit SetAllout_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetAllout_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    akari_msgs::srv::SetAllout_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetAllout_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetAllout_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetAllout_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetAllout_Response
    std::shared_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetAllout_Response
    std::shared_ptr<akari_msgs::srv::SetAllout_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAllout_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAllout_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAllout_Response_

// alias to use template instance with default allocator
using SetAllout_Response =
  akari_msgs::srv::SetAllout_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs

namespace akari_msgs
{

namespace srv
{

struct SetAllout
{
  using Request = akari_msgs::srv::SetAllout_Request;
  using Response = akari_msgs::srv::SetAllout_Response;
};

}  // namespace srv

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_ALLOUT__STRUCT_HPP_
