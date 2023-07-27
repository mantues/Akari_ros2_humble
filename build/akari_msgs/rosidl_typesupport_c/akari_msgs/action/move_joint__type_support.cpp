// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "akari_msgs/action/detail/move_joint__struct.h"
#include "akari_msgs/action/detail/move_joint__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_Goal_type_support_ids_t;

static const _MoveJoint_Goal_type_support_ids_t _MoveJoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_Goal_type_support_symbol_names_t _MoveJoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_Goal)),
  }
};

typedef struct _MoveJoint_Goal_type_support_data_t
{
  void * data[2];
} _MoveJoint_Goal_type_support_data_t;

static _MoveJoint_Goal_type_support_data_t _MoveJoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_Goal_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_Goal)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_Result_type_support_ids_t;

static const _MoveJoint_Result_type_support_ids_t _MoveJoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_Result_type_support_symbol_names_t _MoveJoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_Result)),
  }
};

typedef struct _MoveJoint_Result_type_support_data_t
{
  void * data[2];
} _MoveJoint_Result_type_support_data_t;

static _MoveJoint_Result_type_support_data_t _MoveJoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_Result_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_Result)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_Feedback_type_support_ids_t;

static const _MoveJoint_Feedback_type_support_ids_t _MoveJoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_Feedback_type_support_symbol_names_t _MoveJoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_Feedback)),
  }
};

typedef struct _MoveJoint_Feedback_type_support_data_t
{
  void * data[2];
} _MoveJoint_Feedback_type_support_data_t;

static _MoveJoint_Feedback_type_support_data_t _MoveJoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_Feedback_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_Feedback)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_SendGoal_Request_type_support_ids_t;

static const _MoveJoint_SendGoal_Request_type_support_ids_t _MoveJoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_SendGoal_Request_type_support_symbol_names_t _MoveJoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_SendGoal_Request)),
  }
};

typedef struct _MoveJoint_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveJoint_SendGoal_Request_type_support_data_t;

static _MoveJoint_SendGoal_Request_type_support_data_t _MoveJoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_SendGoal_Request_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_SendGoal_Request)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_SendGoal_Response_type_support_ids_t;

static const _MoveJoint_SendGoal_Response_type_support_ids_t _MoveJoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_SendGoal_Response_type_support_symbol_names_t _MoveJoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_SendGoal_Response)),
  }
};

typedef struct _MoveJoint_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveJoint_SendGoal_Response_type_support_data_t;

static _MoveJoint_SendGoal_Response_type_support_data_t _MoveJoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_SendGoal_Response_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_SendGoal_Response)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_SendGoal_type_support_ids_t;

static const _MoveJoint_SendGoal_type_support_ids_t _MoveJoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_SendGoal_type_support_symbol_names_t _MoveJoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_SendGoal)),
  }
};

typedef struct _MoveJoint_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveJoint_SendGoal_type_support_data_t;

static _MoveJoint_SendGoal_type_support_data_t _MoveJoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_SendGoal_service_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveJoint_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_SendGoal)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_GetResult_Request_type_support_ids_t;

static const _MoveJoint_GetResult_Request_type_support_ids_t _MoveJoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_GetResult_Request_type_support_symbol_names_t _MoveJoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_GetResult_Request)),
  }
};

typedef struct _MoveJoint_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveJoint_GetResult_Request_type_support_data_t;

static _MoveJoint_GetResult_Request_type_support_data_t _MoveJoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_GetResult_Request_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_GetResult_Request)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_GetResult_Response_type_support_ids_t;

static const _MoveJoint_GetResult_Response_type_support_ids_t _MoveJoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_GetResult_Response_type_support_symbol_names_t _MoveJoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_GetResult_Response)),
  }
};

typedef struct _MoveJoint_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveJoint_GetResult_Response_type_support_data_t;

static _MoveJoint_GetResult_Response_type_support_data_t _MoveJoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_GetResult_Response_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_GetResult_Response)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_GetResult_type_support_ids_t;

static const _MoveJoint_GetResult_type_support_ids_t _MoveJoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_GetResult_type_support_symbol_names_t _MoveJoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_GetResult)),
  }
};

typedef struct _MoveJoint_GetResult_type_support_data_t
{
  void * data[2];
} _MoveJoint_GetResult_type_support_data_t;

static _MoveJoint_GetResult_type_support_data_t _MoveJoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_GetResult_service_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveJoint_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_GetResult)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__struct.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveJoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveJoint_FeedbackMessage_type_support_ids_t;

static const _MoveJoint_FeedbackMessage_type_support_ids_t _MoveJoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveJoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveJoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveJoint_FeedbackMessage_type_support_symbol_names_t _MoveJoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, action, MoveJoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, action, MoveJoint_FeedbackMessage)),
  }
};

typedef struct _MoveJoint_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveJoint_FeedbackMessage_type_support_data_t;

static _MoveJoint_FeedbackMessage_type_support_data_t _MoveJoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveJoint_FeedbackMessage_message_typesupport_map = {
  2,
  "akari_msgs",
  &_MoveJoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveJoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveJoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveJoint_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveJoint_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, akari_msgs, action, MoveJoint_FeedbackMessage)() {
  return &::akari_msgs::action::rosidl_typesupport_c::MoveJoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "akari_msgs/action/move_joint.h"
// already included above
// #include "akari_msgs/action/detail/move_joint__type_support.h"

static rosidl_action_type_support_t _akari_msgs__action__MoveJoint__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, akari_msgs, action, MoveJoint)()
{
  // Thread-safe by always writing the same values to the static struct
  _akari_msgs__action__MoveJoint__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, akari_msgs, action, MoveJoint_SendGoal)();
  _akari_msgs__action__MoveJoint__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, akari_msgs, action, MoveJoint_GetResult)();
  _akari_msgs__action__MoveJoint__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _akari_msgs__action__MoveJoint__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, akari_msgs, action, MoveJoint_FeedbackMessage)();
  _akari_msgs__action__MoveJoint__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_akari_msgs__action__MoveJoint__typesupport_c;
}

#ifdef __cplusplus
}
#endif
