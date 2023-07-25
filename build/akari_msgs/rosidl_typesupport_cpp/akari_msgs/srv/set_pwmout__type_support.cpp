// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from akari_msgs:srv/SetPwmout.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "akari_msgs/srv/detail/set_pwmout__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetPwmout_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPwmout_Request_type_support_ids_t;

static const _SetPwmout_Request_type_support_ids_t _SetPwmout_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetPwmout_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPwmout_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPwmout_Request_type_support_symbol_names_t _SetPwmout_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, akari_msgs, srv, SetPwmout_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, akari_msgs, srv, SetPwmout_Request)),
  }
};

typedef struct _SetPwmout_Request_type_support_data_t
{
  void * data[2];
} _SetPwmout_Request_type_support_data_t;

static _SetPwmout_Request_type_support_data_t _SetPwmout_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPwmout_Request_message_typesupport_map = {
  2,
  "akari_msgs",
  &_SetPwmout_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPwmout_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPwmout_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPwmout_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPwmout_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace akari_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<akari_msgs::srv::SetPwmout_Request>()
{
  return &::akari_msgs::srv::rosidl_typesupport_cpp::SetPwmout_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, akari_msgs, srv, SetPwmout_Request)() {
  return get_message_type_support_handle<akari_msgs::srv::SetPwmout_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "akari_msgs/srv/detail/set_pwmout__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetPwmout_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPwmout_Response_type_support_ids_t;

static const _SetPwmout_Response_type_support_ids_t _SetPwmout_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetPwmout_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPwmout_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPwmout_Response_type_support_symbol_names_t _SetPwmout_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, akari_msgs, srv, SetPwmout_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, akari_msgs, srv, SetPwmout_Response)),
  }
};

typedef struct _SetPwmout_Response_type_support_data_t
{
  void * data[2];
} _SetPwmout_Response_type_support_data_t;

static _SetPwmout_Response_type_support_data_t _SetPwmout_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPwmout_Response_message_typesupport_map = {
  2,
  "akari_msgs",
  &_SetPwmout_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPwmout_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPwmout_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPwmout_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPwmout_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace akari_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<akari_msgs::srv::SetPwmout_Response>()
{
  return &::akari_msgs::srv::rosidl_typesupport_cpp::SetPwmout_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, akari_msgs, srv, SetPwmout_Response)() {
  return get_message_type_support_handle<akari_msgs::srv::SetPwmout_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "akari_msgs/srv/detail/set_pwmout__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace akari_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetPwmout_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPwmout_type_support_ids_t;

static const _SetPwmout_type_support_ids_t _SetPwmout_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetPwmout_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPwmout_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPwmout_type_support_symbol_names_t _SetPwmout_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, akari_msgs, srv, SetPwmout)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, akari_msgs, srv, SetPwmout)),
  }
};

typedef struct _SetPwmout_type_support_data_t
{
  void * data[2];
} _SetPwmout_type_support_data_t;

static _SetPwmout_type_support_data_t _SetPwmout_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPwmout_service_typesupport_map = {
  2,
  "akari_msgs",
  &_SetPwmout_service_typesupport_ids.typesupport_identifier[0],
  &_SetPwmout_service_typesupport_symbol_names.symbol_name[0],
  &_SetPwmout_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPwmout_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPwmout_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace akari_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<akari_msgs::srv::SetPwmout>()
{
  return &::akari_msgs::srv::rosidl_typesupport_cpp::SetPwmout_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
