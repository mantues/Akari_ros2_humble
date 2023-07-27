// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__STRUCT_HPP_
#define AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_Goal __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_Goal_
{
  using Type = MoveJoint_Goal_<ContainerAllocator>;

  explicit MoveJoint_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_pan = 0.0f;
      this->acc_tilt = 0.0f;
      this->vel_pan = 0.0f;
      this->vel_tilt = 0.0f;
      this->goal_pan = 0.0f;
      this->goal_tilt = 0.0f;
    }
  }

  explicit MoveJoint_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_pan = 0.0f;
      this->acc_tilt = 0.0f;
      this->vel_pan = 0.0f;
      this->vel_tilt = 0.0f;
      this->goal_pan = 0.0f;
      this->goal_tilt = 0.0f;
    }
  }

  // field types and members
  using _acc_pan_type =
    float;
  _acc_pan_type acc_pan;
  using _acc_tilt_type =
    float;
  _acc_tilt_type acc_tilt;
  using _vel_pan_type =
    float;
  _vel_pan_type vel_pan;
  using _vel_tilt_type =
    float;
  _vel_tilt_type vel_tilt;
  using _goal_pan_type =
    float;
  _goal_pan_type goal_pan;
  using _goal_tilt_type =
    float;
  _goal_tilt_type goal_tilt;

  // setters for named parameter idiom
  Type & set__acc_pan(
    const float & _arg)
  {
    this->acc_pan = _arg;
    return *this;
  }
  Type & set__acc_tilt(
    const float & _arg)
  {
    this->acc_tilt = _arg;
    return *this;
  }
  Type & set__vel_pan(
    const float & _arg)
  {
    this->vel_pan = _arg;
    return *this;
  }
  Type & set__vel_tilt(
    const float & _arg)
  {
    this->vel_tilt = _arg;
    return *this;
  }
  Type & set__goal_pan(
    const float & _arg)
  {
    this->goal_pan = _arg;
    return *this;
  }
  Type & set__goal_tilt(
    const float & _arg)
  {
    this->goal_tilt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_Goal
    std::shared_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_Goal
    std::shared_ptr<akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_Goal_ & other) const
  {
    if (this->acc_pan != other.acc_pan) {
      return false;
    }
    if (this->acc_tilt != other.acc_tilt) {
      return false;
    }
    if (this->vel_pan != other.vel_pan) {
      return false;
    }
    if (this->vel_tilt != other.vel_tilt) {
      return false;
    }
    if (this->goal_pan != other.goal_pan) {
      return false;
    }
    if (this->goal_tilt != other.goal_tilt) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_Goal_

// alias to use template instance with default allocator
using MoveJoint_Goal =
  akari_msgs::action::MoveJoint_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_Result __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_Result_
{
  using Type = MoveJoint_Result_<ContainerAllocator>;

  explicit MoveJoint_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit MoveJoint_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    akari_msgs::action::MoveJoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_Result
    std::shared_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_Result
    std::shared_ptr<akari_msgs::action::MoveJoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_Result_

// alias to use template instance with default allocator
using MoveJoint_Result =
  akari_msgs::action::MoveJoint_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs


#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_Feedback __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_Feedback_
{
  using Type = MoveJoint_Feedback_<ContainerAllocator>;

  explicit MoveJoint_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_pan = 0.0f;
      this->pos_tilt = 0.0f;
    }
  }

  explicit MoveJoint_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_pan = 0.0f;
      this->pos_tilt = 0.0f;
    }
  }

  // field types and members
  using _pos_pan_type =
    float;
  _pos_pan_type pos_pan;
  using _pos_tilt_type =
    float;
  _pos_tilt_type pos_tilt;

  // setters for named parameter idiom
  Type & set__pos_pan(
    const float & _arg)
  {
    this->pos_pan = _arg;
    return *this;
  }
  Type & set__pos_tilt(
    const float & _arg)
  {
    this->pos_tilt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_Feedback
    std::shared_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_Feedback
    std::shared_ptr<akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_Feedback_ & other) const
  {
    if (this->pos_pan != other.pos_pan) {
      return false;
    }
    if (this->pos_tilt != other.pos_tilt) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_Feedback_

// alias to use template instance with default allocator
using MoveJoint_Feedback =
  akari_msgs::action::MoveJoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "akari_msgs/action/detail/move_joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_SendGoal_Request_
{
  using Type = MoveJoint_SendGoal_Request_<ContainerAllocator>;

  explicit MoveJoint_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveJoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    akari_msgs::action::MoveJoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const akari_msgs::action::MoveJoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Request
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Request
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_SendGoal_Request_

// alias to use template instance with default allocator
using MoveJoint_SendGoal_Request =
  akari_msgs::action::MoveJoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_SendGoal_Response_
{
  using Type = MoveJoint_SendGoal_Response_<ContainerAllocator>;

  explicit MoveJoint_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveJoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Response
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_SendGoal_Response
    std::shared_ptr<akari_msgs::action::MoveJoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_SendGoal_Response_

// alias to use template instance with default allocator
using MoveJoint_SendGoal_Response =
  akari_msgs::action::MoveJoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs

namespace akari_msgs
{

namespace action
{

struct MoveJoint_SendGoal
{
  using Request = akari_msgs::action::MoveJoint_SendGoal_Request;
  using Response = akari_msgs::action::MoveJoint_SendGoal_Response;
};

}  // namespace action

}  // namespace akari_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Request __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_GetResult_Request_
{
  using Type = MoveJoint_GetResult_Request_<ContainerAllocator>;

  explicit MoveJoint_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveJoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Request
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Request
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_GetResult_Request_

// alias to use template instance with default allocator
using MoveJoint_GetResult_Request =
  akari_msgs::action::MoveJoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Response __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_GetResult_Response_
{
  using Type = MoveJoint_GetResult_Response_<ContainerAllocator>;

  explicit MoveJoint_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveJoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    akari_msgs::action::MoveJoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const akari_msgs::action::MoveJoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Response
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_GetResult_Response
    std::shared_ptr<akari_msgs::action::MoveJoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_GetResult_Response_

// alias to use template instance with default allocator
using MoveJoint_GetResult_Response =
  akari_msgs::action::MoveJoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs

namespace akari_msgs
{

namespace action
{

struct MoveJoint_GetResult
{
  using Request = akari_msgs::action::MoveJoint_GetResult_Request;
  using Response = akari_msgs::action::MoveJoint_GetResult_Response;
};

}  // namespace action

}  // namespace akari_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__akari_msgs__action__MoveJoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__akari_msgs__action__MoveJoint_FeedbackMessage __declspec(deprecated)
#endif

namespace akari_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_FeedbackMessage_
{
  using Type = MoveJoint_FeedbackMessage_<ContainerAllocator>;

  explicit MoveJoint_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveJoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const akari_msgs::action::MoveJoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__akari_msgs__action__MoveJoint_FeedbackMessage
    std::shared_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__akari_msgs__action__MoveJoint_FeedbackMessage
    std::shared_ptr<akari_msgs::action::MoveJoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_FeedbackMessage_

// alias to use template instance with default allocator
using MoveJoint_FeedbackMessage =
  akari_msgs::action::MoveJoint_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace akari_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace akari_msgs
{

namespace action
{

struct MoveJoint
{
  /// The goal message defined in the action definition.
  using Goal = akari_msgs::action::MoveJoint_Goal;
  /// The result message defined in the action definition.
  using Result = akari_msgs::action::MoveJoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = akari_msgs::action::MoveJoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = akari_msgs::action::MoveJoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = akari_msgs::action::MoveJoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = akari_msgs::action::MoveJoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveJoint MoveJoint;

}  // namespace action

}  // namespace akari_msgs

#endif  // AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__STRUCT_HPP_
