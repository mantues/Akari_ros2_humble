// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__BUILDER_HPP_
#define AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "akari_msgs/action/detail/move_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_Goal_goal_tilt
{
public:
  explicit Init_MoveJoint_Goal_goal_tilt(::akari_msgs::action::MoveJoint_Goal & msg)
  : msg_(msg)
  {}
  ::akari_msgs::action::MoveJoint_Goal goal_tilt(::akari_msgs::action::MoveJoint_Goal::_goal_tilt_type arg)
  {
    msg_.goal_tilt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Goal msg_;
};

class Init_MoveJoint_Goal_goal_pan
{
public:
  explicit Init_MoveJoint_Goal_goal_pan(::akari_msgs::action::MoveJoint_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Goal_goal_tilt goal_pan(::akari_msgs::action::MoveJoint_Goal::_goal_pan_type arg)
  {
    msg_.goal_pan = std::move(arg);
    return Init_MoveJoint_Goal_goal_tilt(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Goal msg_;
};

class Init_MoveJoint_Goal_vel_tilt
{
public:
  explicit Init_MoveJoint_Goal_vel_tilt(::akari_msgs::action::MoveJoint_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Goal_goal_pan vel_tilt(::akari_msgs::action::MoveJoint_Goal::_vel_tilt_type arg)
  {
    msg_.vel_tilt = std::move(arg);
    return Init_MoveJoint_Goal_goal_pan(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Goal msg_;
};

class Init_MoveJoint_Goal_vel_pan
{
public:
  explicit Init_MoveJoint_Goal_vel_pan(::akari_msgs::action::MoveJoint_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Goal_vel_tilt vel_pan(::akari_msgs::action::MoveJoint_Goal::_vel_pan_type arg)
  {
    msg_.vel_pan = std::move(arg);
    return Init_MoveJoint_Goal_vel_tilt(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Goal msg_;
};

class Init_MoveJoint_Goal_acc_tilt
{
public:
  explicit Init_MoveJoint_Goal_acc_tilt(::akari_msgs::action::MoveJoint_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Goal_vel_pan acc_tilt(::akari_msgs::action::MoveJoint_Goal::_acc_tilt_type arg)
  {
    msg_.acc_tilt = std::move(arg);
    return Init_MoveJoint_Goal_vel_pan(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Goal msg_;
};

class Init_MoveJoint_Goal_acc_pan
{
public:
  Init_MoveJoint_Goal_acc_pan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_Goal_acc_tilt acc_pan(::akari_msgs::action::MoveJoint_Goal::_acc_pan_type arg)
  {
    msg_.acc_pan = std::move(arg);
    return Init_MoveJoint_Goal_acc_tilt(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_Goal>()
{
  return akari_msgs::action::builder::Init_MoveJoint_Goal_acc_pan();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_Result_result
{
public:
  Init_MoveJoint_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::action::MoveJoint_Result result(::akari_msgs::action::MoveJoint_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_Result>()
{
  return akari_msgs::action::builder::Init_MoveJoint_Result_result();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_Feedback_pos_tilt
{
public:
  explicit Init_MoveJoint_Feedback_pos_tilt(::akari_msgs::action::MoveJoint_Feedback & msg)
  : msg_(msg)
  {}
  ::akari_msgs::action::MoveJoint_Feedback pos_tilt(::akari_msgs::action::MoveJoint_Feedback::_pos_tilt_type arg)
  {
    msg_.pos_tilt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Feedback msg_;
};

class Init_MoveJoint_Feedback_pos_pan
{
public:
  Init_MoveJoint_Feedback_pos_pan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_Feedback_pos_tilt pos_pan(::akari_msgs::action::MoveJoint_Feedback::_pos_pan_type arg)
  {
    msg_.pos_pan = std::move(arg);
    return Init_MoveJoint_Feedback_pos_tilt(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_Feedback>()
{
  return akari_msgs::action::builder::Init_MoveJoint_Feedback_pos_pan();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_SendGoal_Request_goal
{
public:
  explicit Init_MoveJoint_SendGoal_Request_goal(::akari_msgs::action::MoveJoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::akari_msgs::action::MoveJoint_SendGoal_Request goal(::akari_msgs::action::MoveJoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_SendGoal_Request msg_;
};

class Init_MoveJoint_SendGoal_Request_goal_id
{
public:
  Init_MoveJoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_SendGoal_Request_goal goal_id(::akari_msgs::action::MoveJoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveJoint_SendGoal_Request_goal(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_SendGoal_Request>()
{
  return akari_msgs::action::builder::Init_MoveJoint_SendGoal_Request_goal_id();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_SendGoal_Response_stamp
{
public:
  explicit Init_MoveJoint_SendGoal_Response_stamp(::akari_msgs::action::MoveJoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::akari_msgs::action::MoveJoint_SendGoal_Response stamp(::akari_msgs::action::MoveJoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_SendGoal_Response msg_;
};

class Init_MoveJoint_SendGoal_Response_accepted
{
public:
  Init_MoveJoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_SendGoal_Response_stamp accepted(::akari_msgs::action::MoveJoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveJoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_SendGoal_Response>()
{
  return akari_msgs::action::builder::Init_MoveJoint_SendGoal_Response_accepted();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_GetResult_Request_goal_id
{
public:
  Init_MoveJoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::akari_msgs::action::MoveJoint_GetResult_Request goal_id(::akari_msgs::action::MoveJoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_GetResult_Request>()
{
  return akari_msgs::action::builder::Init_MoveJoint_GetResult_Request_goal_id();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_GetResult_Response_result
{
public:
  explicit Init_MoveJoint_GetResult_Response_result(::akari_msgs::action::MoveJoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::akari_msgs::action::MoveJoint_GetResult_Response result(::akari_msgs::action::MoveJoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_GetResult_Response msg_;
};

class Init_MoveJoint_GetResult_Response_status
{
public:
  Init_MoveJoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_GetResult_Response_result status(::akari_msgs::action::MoveJoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveJoint_GetResult_Response_result(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_GetResult_Response>()
{
  return akari_msgs::action::builder::Init_MoveJoint_GetResult_Response_status();
}

}  // namespace akari_msgs


namespace akari_msgs
{

namespace action
{

namespace builder
{

class Init_MoveJoint_FeedbackMessage_feedback
{
public:
  explicit Init_MoveJoint_FeedbackMessage_feedback(::akari_msgs::action::MoveJoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::akari_msgs::action::MoveJoint_FeedbackMessage feedback(::akari_msgs::action::MoveJoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_FeedbackMessage msg_;
};

class Init_MoveJoint_FeedbackMessage_goal_id
{
public:
  Init_MoveJoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_FeedbackMessage_feedback goal_id(::akari_msgs::action::MoveJoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveJoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::akari_msgs::action::MoveJoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::akari_msgs::action::MoveJoint_FeedbackMessage>()
{
  return akari_msgs::action::builder::Init_MoveJoint_FeedbackMessage_goal_id();
}

}  // namespace akari_msgs

#endif  // AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__BUILDER_HPP_
