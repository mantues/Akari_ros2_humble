// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:srv/SetDisplayImage.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__STRUCT_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetDisplayImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetDisplayImage_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDisplayImage_Request_
{
  using Type = SetDisplayImage_Request_<ContainerAllocator>;

  explicit SetDisplayImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
      this->pos_x = 0l;
      this->pos_y = 0l;
      this->scale = 0.0f;
    }
  }

  explicit SetDisplayImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filepath(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
      this->pos_x = 0l;
      this->pos_y = 0l;
      this->scale = 0.0f;
    }
  }

  // field types and members
  using _filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filepath_type filepath;
  using _pos_x_type =
    int32_t;
  _pos_x_type pos_x;
  using _pos_y_type =
    int32_t;
  _pos_y_type pos_y;
  using _scale_type =
    float;
  _scale_type scale;

  // setters for named parameter idiom
  Type & set__filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filepath = _arg;
    return *this;
  }
  Type & set__pos_x(
    const int32_t & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const int32_t & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetDisplayImage_Request
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetDisplayImage_Request
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDisplayImage_Request_ & other) const
  {
    if (this->filepath != other.filepath) {
      return false;
    }
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDisplayImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDisplayImage_Request_

// alias to use template instance with default allocator
using SetDisplayImage_Request =
  akari_msgs::srv::SetDisplayImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__srv__SetDisplayImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__srv__SetDisplayImage_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDisplayImage_Response_
{
  using Type = SetDisplayImage_Response_<ContainerAllocator>;

  explicit SetDisplayImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetDisplayImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__srv__SetDisplayImage_Response
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__srv__SetDisplayImage_Response
    std::shared_ptr<akari_msgs::srv::SetDisplayImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDisplayImage_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDisplayImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDisplayImage_Response_

// alias to use template instance with default allocator
using SetDisplayImage_Response =
  akari_msgs::srv::SetDisplayImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace akari_msgs

namespace akari_msgs
{

namespace srv
{

struct SetDisplayImage
{
  using Request = akari_msgs::srv::SetDisplayImage_Request;
  using Response = akari_msgs::srv::SetDisplayImage_Response;
};

}  // namespace srv

}  // namespace akari_msgs

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__STRUCT_HPP_
