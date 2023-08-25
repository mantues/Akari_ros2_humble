// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:srv/SetJointBool.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__STRUCT_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetJointBool_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetJointBool_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointBool_Request_
{
  using Type = SetJointBool_Request_<ContainerAllocator>;

  explicit SetJointBool_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetJointBool_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;
  using _val_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _val_type val;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__val(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::srv::SetJointBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetJointBool_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetJointBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetJointBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetJointBool_Request
    std::shared_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetJointBool_Request
    std::shared_ptr<akari_msgs::srv::SetJointBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointBool_Request_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointBool_Request_

// alias to use template instance with default allocator
using SetJointBool_Request =
  akari_msgs::srv::SetJointBool_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetJointBool_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetJointBool_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointBool_Response_
{
  using Type = SetJointBool_Response_<ContainerAllocator>;

  explicit SetJointBool_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetJointBool_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    akari_msgs::srv::SetJointBool_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetJointBool_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetJointBool_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetJointBool_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetJointBool_Response
    std::shared_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetJointBool_Response
    std::shared_ptr<akari_msgs::srv::SetJointBool_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointBool_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointBool_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointBool_Response_

// alias to use template instance with default allocator
using SetJointBool_Response =
  akari_msgs::srv::SetJointBool_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs

namespace akari_msgs
{

namespace srv
{

struct SetJointBool
{
  using Request = akari_msgs::srv::SetJointBool_Request;
  using Response = akari_msgs::srv::SetJointBool_Response;
};

}  // namespace srv

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__STRUCT_HPP_