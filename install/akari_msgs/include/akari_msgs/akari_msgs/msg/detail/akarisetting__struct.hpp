// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__AKARISETTING__STRUCT_HPP_
#define AKARI_MSGS__MSG__DETAIL__AKARISETTING__STRUCT_HPP_

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
# define DEPRECATED__akari_msgs__msg__Akarisetting __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__msg__Akarisetting __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Akarisetting_
{
  using Type = Akarisetting_<ContainerAllocator>;

  explicit Akarisetting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Akarisetting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _jointname_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _jointname_type jointname;
  using _jointpositions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _jointpositions_type jointpositions;
  using _jointvelocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _jointvelocities_type jointvelocities;
  using _jointaccelerations_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _jointaccelerations_type jointaccelerations;
  using _servoenabled_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _servoenabled_type servoenabled;
  using _servomovingstate_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _servomovingstate_type servomovingstate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__jointname(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->jointname = _arg;
    return *this;
  }
  Type & set__jointpositions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->jointpositions = _arg;
    return *this;
  }
  Type & set__jointvelocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->jointvelocities = _arg;
    return *this;
  }
  Type & set__jointaccelerations(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->jointaccelerations = _arg;
    return *this;
  }
  Type & set__servoenabled(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->servoenabled = _arg;
    return *this;
  }
  Type & set__servomovingstate(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->servomovingstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::msg::Akarisetting_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::msg::Akarisetting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::msg::Akarisetting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::msg::Akarisetting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__msg__Akarisetting
    std::shared_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__msg__Akarisetting
    std::shared_ptr<akari_msgs::msg::Akarisetting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Akarisetting_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->jointname != other.jointname) {
      return false;
    }
    if (this->jointpositions != other.jointpositions) {
      return false;
    }
    if (this->jointvelocities != other.jointvelocities) {
      return false;
    }
    if (this->jointaccelerations != other.jointaccelerations) {
      return false;
    }
    if (this->servoenabled != other.servoenabled) {
      return false;
    }
    if (this->servomovingstate != other.servomovingstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const Akarisetting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Akarisetting_

// alias to use template instance with default allocator
using Akarisetting =
  akari_msgs::msg::Akarisetting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace akari_msgs

#endif  // AKARI_MSGS__MSG__DETAIL__AKARISETTING__STRUCT_HPP_
