// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__STRUCT_H_
#define AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_Goal
{
  float acc_pan;
  float acc_tilt;
  float vel_pan;
  float vel_tilt;
  float goal_pan;
  float goal_tilt;
} akari_msgs__action__MoveJoint_Goal;

// Struct for a sequence of akari_msgs__action__MoveJoint_Goal.
typedef struct akari_msgs__action__MoveJoint_Goal__Sequence
{
  akari_msgs__action__MoveJoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_Result
{
  bool result;
} akari_msgs__action__MoveJoint_Result;

// Struct for a sequence of akari_msgs__action__MoveJoint_Result.
typedef struct akari_msgs__action__MoveJoint_Result__Sequence
{
  akari_msgs__action__MoveJoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_Feedback
{
  float pos_pan;
  float pos_tilt;
} akari_msgs__action__MoveJoint_Feedback;

// Struct for a sequence of akari_msgs__action__MoveJoint_Feedback.
typedef struct akari_msgs__action__MoveJoint_Feedback__Sequence
{
  akari_msgs__action__MoveJoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "akari_msgs/action/detail/move_joint__struct.h"

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  akari_msgs__action__MoveJoint_Goal goal;
} akari_msgs__action__MoveJoint_SendGoal_Request;

// Struct for a sequence of akari_msgs__action__MoveJoint_SendGoal_Request.
typedef struct akari_msgs__action__MoveJoint_SendGoal_Request__Sequence
{
  akari_msgs__action__MoveJoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} akari_msgs__action__MoveJoint_SendGoal_Response;

// Struct for a sequence of akari_msgs__action__MoveJoint_SendGoal_Response.
typedef struct akari_msgs__action__MoveJoint_SendGoal_Response__Sequence
{
  akari_msgs__action__MoveJoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} akari_msgs__action__MoveJoint_GetResult_Request;

// Struct for a sequence of akari_msgs__action__MoveJoint_GetResult_Request.
typedef struct akari_msgs__action__MoveJoint_GetResult_Request__Sequence
{
  akari_msgs__action__MoveJoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_GetResult_Response
{
  int8_t status;
  akari_msgs__action__MoveJoint_Result result;
} akari_msgs__action__MoveJoint_GetResult_Response;

// Struct for a sequence of akari_msgs__action__MoveJoint_GetResult_Response.
typedef struct akari_msgs__action__MoveJoint_GetResult_Response__Sequence
{
  akari_msgs__action__MoveJoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"

/// Struct defined in action/MoveJoint in the package akari_msgs.
typedef struct akari_msgs__action__MoveJoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  akari_msgs__action__MoveJoint_Feedback feedback;
} akari_msgs__action__MoveJoint_FeedbackMessage;

// Struct for a sequence of akari_msgs__action__MoveJoint_FeedbackMessage.
typedef struct akari_msgs__action__MoveJoint_FeedbackMessage__Sequence
{
  akari_msgs__action__MoveJoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__action__MoveJoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__STRUCT_H_
