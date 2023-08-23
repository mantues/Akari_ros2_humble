// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from akari_msgs:srv/SetServoStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "akari_msgs/srv/detail/set_servo_status__rosidl_typesupport_introspection_c.h"
#include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "akari_msgs/srv/detail/set_servo_status__functions.h"
#include "akari_msgs/srv/detail/set_servo_status__struct.h"


// Include directives for member types
// Member `joint_name`
// Member `joint_name_array`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_vel_array`
// Member `joint_acc_array`
// Member `servo_enable_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__srv__SetServoStatus_Request__init(message_memory);
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_fini_function(void * message_memory)
{
  akari_msgs__srv__SetServoStatus_Request__fini(message_memory);
}

size_t akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__joint_name_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_name_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_name_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__joint_name_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_name_array(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__joint_name_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_name_array(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__joint_name_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__joint_vel_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_vel_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_vel_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__joint_vel_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_vel_array(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__joint_vel_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_vel_array(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__joint_vel_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__joint_acc_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_acc_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_acc_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__joint_acc_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_acc_array(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__joint_acc_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_acc_array(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__joint_acc_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__servo_enable_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__servo_enable_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__servo_enable_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__servo_enable_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__servo_enable_array(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__servo_enable_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__servo_enable_array(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__servo_enable_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_member_array[8] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_name_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, joint_name_array),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__joint_name_array,  // size() function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_name_array,  // get_const(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_name_array,  // get(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__joint_name_array,  // fetch(index, &value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__joint_name_array,  // assign(index, value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__joint_name_array  // resize(index) function pointer
  },
  {
    "joint_vel_val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, joint_vel_val),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_vel_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, joint_vel_array),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__joint_vel_array,  // size() function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_vel_array,  // get_const(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_vel_array,  // get(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__joint_vel_array,  // fetch(index, &value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__joint_vel_array,  // assign(index, value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__joint_vel_array  // resize(index) function pointer
  },
  {
    "joint_acc_val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, joint_acc_val),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_acc_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, joint_acc_array),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__joint_acc_array,  // size() function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__joint_acc_array,  // get_const(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__joint_acc_array,  // get(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__joint_acc_array,  // fetch(index, &value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__joint_acc_array,  // assign(index, value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__joint_acc_array  // resize(index) function pointer
  },
  {
    "servo_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, servo_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_enable_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Request, servo_enable_array),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__size_function__SetServoStatus_Request__servo_enable_array,  // size() function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_const_function__SetServoStatus_Request__servo_enable_array,  // get_const(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__get_function__SetServoStatus_Request__servo_enable_array,  // get(index) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__fetch_function__SetServoStatus_Request__servo_enable_array,  // fetch(index, &value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__assign_function__SetServoStatus_Request__servo_enable_array,  // assign(index, value) function pointer
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__resize_function__SetServoStatus_Request__servo_enable_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_members = {
  "akari_msgs__srv",  // message namespace
  "SetServoStatus_Request",  // message name
  8,  // number of fields
  sizeof(akari_msgs__srv__SetServoStatus_Request),
  akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_member_array,  // message members
  akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_type_support_handle = {
  0,
  &akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus_Request)() {
  if (!akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__srv__SetServoStatus_Request__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "akari_msgs/srv/detail/set_servo_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "akari_msgs/srv/detail/set_servo_status__functions.h"
// already included above
// #include "akari_msgs/srv/detail/set_servo_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__srv__SetServoStatus_Response__init(message_memory);
}

void akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_fini_function(void * message_memory)
{
  akari_msgs__srv__SetServoStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetServoStatus_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_members = {
  "akari_msgs__srv",  // message namespace
  "SetServoStatus_Response",  // message name
  1,  // number of fields
  sizeof(akari_msgs__srv__SetServoStatus_Response),
  akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_member_array,  // message members
  akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_type_support_handle = {
  0,
  &akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus_Response)() {
  if (!akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__srv__SetServoStatus_Response__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "akari_msgs/srv/detail/set_servo_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_members = {
  "akari_msgs__srv",  // service namespace
  "SetServoStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_Request_message_type_support_handle,
  NULL  // response message
  // akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_type_support_handle = {
  0,
  &akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus)() {
  if (!akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetServoStatus_Response)()->data;
  }

  return &akari_msgs__srv__detail__set_servo_status__rosidl_typesupport_introspection_c__SetServoStatus_service_type_support_handle;
}
