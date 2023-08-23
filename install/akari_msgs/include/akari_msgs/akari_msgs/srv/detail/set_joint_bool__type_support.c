// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from akari_msgs:srv/SetJointBool.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "akari_msgs/srv/detail/set_joint_bool__rosidl_typesupport_introspection_c.h"
#include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "akari_msgs/srv/detail/set_joint_bool__functions.h"
#include "akari_msgs/srv/detail/set_joint_bool__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `val`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__srv__SetJointBool_Request__init(message_memory);
}

void akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_fini_function(void * message_memory)
{
  akari_msgs__srv__SetJointBool_Request__fini(message_memory);
}

size_t akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__size_function__SetJointBool_Request__joint_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointBool_Request__joint_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_function__SetJointBool_Request__joint_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointBool_Request__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointBool_Request__joint_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__assign_function__SetJointBool_Request__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_function__SetJointBool_Request__joint_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__resize_function__SetJointBool_Request__joint_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__size_function__SetJointBool_Request__val(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointBool_Request__val(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_function__SetJointBool_Request__val(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointBool_Request__val(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointBool_Request__val(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__assign_function__SetJointBool_Request__val(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_function__SetJointBool_Request__val(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__resize_function__SetJointBool_Request__val(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_member_array[2] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetJointBool_Request, joint_name),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__size_function__SetJointBool_Request__joint_name,  // size() function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointBool_Request__joint_name,  // get_const(index) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_function__SetJointBool_Request__joint_name,  // get(index) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointBool_Request__joint_name,  // fetch(index, &value) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__assign_function__SetJointBool_Request__joint_name,  // assign(index, value) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__resize_function__SetJointBool_Request__joint_name  // resize(index) function pointer
  },
  {
    "val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetJointBool_Request, val),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__size_function__SetJointBool_Request__val,  // size() function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointBool_Request__val,  // get_const(index) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__get_function__SetJointBool_Request__val,  // get(index) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointBool_Request__val,  // fetch(index, &value) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__assign_function__SetJointBool_Request__val,  // assign(index, value) function pointer
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__resize_function__SetJointBool_Request__val  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_members = {
  "akari_msgs__srv",  // message namespace
  "SetJointBool_Request",  // message name
  2,  // number of fields
  sizeof(akari_msgs__srv__SetJointBool_Request),
  akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_member_array,  // message members
  akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_type_support_handle = {
  0,
  &akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool_Request)() {
  if (!akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__srv__SetJointBool_Request__rosidl_typesupport_introspection_c__SetJointBool_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "akari_msgs/srv/detail/set_joint_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "akari_msgs/srv/detail/set_joint_bool__functions.h"
// already included above
// #include "akari_msgs/srv/detail/set_joint_bool__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__srv__SetJointBool_Response__init(message_memory);
}

void akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_fini_function(void * message_memory)
{
  akari_msgs__srv__SetJointBool_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetJointBool_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_members = {
  "akari_msgs__srv",  // message namespace
  "SetJointBool_Response",  // message name
  1,  // number of fields
  sizeof(akari_msgs__srv__SetJointBool_Response),
  akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_member_array,  // message members
  akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_type_support_handle = {
  0,
  &akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool_Response)() {
  if (!akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__srv__SetJointBool_Response__rosidl_typesupport_introspection_c__SetJointBool_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "akari_msgs/srv/detail/set_joint_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_members = {
  "akari_msgs__srv",  // service namespace
  "SetJointBool",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_Request_message_type_support_handle,
  NULL  // response message
  // akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_Response_message_type_support_handle
};

static rosidl_service_type_support_t akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_type_support_handle = {
  0,
  &akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool)() {
  if (!akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetJointBool_Response)()->data;
  }

  return &akari_msgs__srv__detail__set_joint_bool__rosidl_typesupport_introspection_c__SetJointBool_service_type_support_handle;
}
