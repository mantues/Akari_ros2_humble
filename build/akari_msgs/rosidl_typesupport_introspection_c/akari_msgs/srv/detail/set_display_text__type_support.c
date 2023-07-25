// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from akari_msgs:srv/SetDisplayText.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "akari_msgs/srv/detail/set_display_text__rosidl_typesupport_introspection_c.h"
#include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "akari_msgs/srv/detail/set_display_text__functions.h"
#include "akari_msgs/srv/detail/set_display_text__struct.h"


// Include directives for member types
// Member `text`
// Member `text_color`
// Member `back_color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__srv__SetDisplayText_Request__init(message_memory);
}

void akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_fini_function(void * message_memory)
{
  akari_msgs__srv__SetDisplayText_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_member_array[7] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, pos_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, pos_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, text_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, back_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "refresh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Request, refresh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_members = {
  "akari_msgs__srv",  // message namespace
  "SetDisplayText_Request",  // message name
  7,  // number of fields
  sizeof(akari_msgs__srv__SetDisplayText_Request),
  akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_member_array,  // message members
  akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_type_support_handle = {
  0,
  &akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText_Request)() {
  if (!akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__srv__SetDisplayText_Request__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "akari_msgs/srv/detail/set_display_text__rosidl_typesupport_introspection_c.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "akari_msgs/srv/detail/set_display_text__functions.h"
// already included above
// #include "akari_msgs/srv/detail/set_display_text__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__srv__SetDisplayText_Response__init(message_memory);
}

void akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_fini_function(void * message_memory)
{
  akari_msgs__srv__SetDisplayText_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__srv__SetDisplayText_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_members = {
  "akari_msgs__srv",  // message namespace
  "SetDisplayText_Response",  // message name
  1,  // number of fields
  sizeof(akari_msgs__srv__SetDisplayText_Response),
  akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_member_array,  // message members
  akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_type_support_handle = {
  0,
  &akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText_Response)() {
  if (!akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__srv__SetDisplayText_Response__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "akari_msgs/srv/detail/set_display_text__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_members = {
  "akari_msgs__srv",  // service namespace
  "SetDisplayText",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_Request_message_type_support_handle,
  NULL  // response message
  // akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_Response_message_type_support_handle
};

static rosidl_service_type_support_t akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_type_support_handle = {
  0,
  &akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText)() {
  if (!akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_type_support_handle.typesupport_identifier) {
    akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, srv, SetDisplayText_Response)()->data;
  }

  return &akari_msgs__srv__detail__set_display_text__rosidl_typesupport_introspection_c__SetDisplayText_service_type_support_handle;
}
