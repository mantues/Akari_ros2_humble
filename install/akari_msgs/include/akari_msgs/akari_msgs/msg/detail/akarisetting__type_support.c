// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "akari_msgs/msg/detail/akarisetting__rosidl_typesupport_introspection_c.h"
#include "akari_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "akari_msgs/msg/detail/akarisetting__functions.h"
#include "akari_msgs/msg/detail/akarisetting__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `jointname`
#include "rosidl_runtime_c/string_functions.h"
// Member `jointpositions`
// Member `jointvelocities`
// Member `jointaccelerations`
// Member `servoenabled`
// Member `servomovingstate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  akari_msgs__msg__Akarisetting__init(message_memory);
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_fini_function(void * message_memory)
{
  akari_msgs__msg__Akarisetting__fini(message_memory);
}

size_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointname(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointname(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointname(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointname(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointname(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointname(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointname(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointname(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointpositions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointpositions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointpositions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointpositions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointpositions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointpositions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointpositions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointpositions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointvelocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointvelocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointvelocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointvelocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointvelocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointvelocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointvelocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointvelocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointaccelerations(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointaccelerations(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointaccelerations(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointaccelerations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointaccelerations(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointaccelerations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointaccelerations(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointaccelerations(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__servoenabled(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__servoenabled(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__servoenabled(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__servoenabled(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__servoenabled(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__servoenabled(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__servoenabled(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__servoenabled(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__servomovingstate(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__servomovingstate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__servomovingstate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__servomovingstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__servomovingstate(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__servomovingstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__servomovingstate(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__servomovingstate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jointname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, jointname),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointname,  // size() function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointname,  // get_const(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointname,  // get(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointname,  // fetch(index, &value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointname,  // assign(index, value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointname  // resize(index) function pointer
  },
  {
    "jointpositions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, jointpositions),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointpositions,  // size() function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointpositions,  // get_const(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointpositions,  // get(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointpositions,  // fetch(index, &value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointpositions,  // assign(index, value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointpositions  // resize(index) function pointer
  },
  {
    "jointvelocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, jointvelocities),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointvelocities,  // size() function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointvelocities,  // get_const(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointvelocities,  // get(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointvelocities,  // fetch(index, &value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointvelocities,  // assign(index, value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointvelocities  // resize(index) function pointer
  },
  {
    "jointaccelerations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, jointaccelerations),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__jointaccelerations,  // size() function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__jointaccelerations,  // get_const(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__jointaccelerations,  // get(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__jointaccelerations,  // fetch(index, &value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__jointaccelerations,  // assign(index, value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__jointaccelerations  // resize(index) function pointer
  },
  {
    "servoenabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, servoenabled),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__servoenabled,  // size() function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__servoenabled,  // get_const(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__servoenabled,  // get(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__servoenabled,  // fetch(index, &value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__servoenabled,  // assign(index, value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__servoenabled  // resize(index) function pointer
  },
  {
    "servomovingstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs__msg__Akarisetting, servomovingstate),  // bytes offset in struct
    NULL,  // default value
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__size_function__Akarisetting__servomovingstate,  // size() function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_const_function__Akarisetting__servomovingstate,  // get_const(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__get_function__Akarisetting__servomovingstate,  // get(index) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__fetch_function__Akarisetting__servomovingstate,  // fetch(index, &value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__assign_function__Akarisetting__servomovingstate,  // assign(index, value) function pointer
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__resize_function__Akarisetting__servomovingstate  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_members = {
  "akari_msgs__msg",  // message namespace
  "Akarisetting",  // message name
  7,  // number of fields
  sizeof(akari_msgs__msg__Akarisetting),
  akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_member_array,  // message members
  akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_init_function,  // function to initialize message memory (memory has to be allocated)
  akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_type_support_handle = {
  0,
  &akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_akari_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, akari_msgs, msg, Akarisetting)() {
  akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_type_support_handle.typesupport_identifier) {
    akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &akari_msgs__msg__Akarisetting__rosidl_typesupport_introspection_c__Akarisetting_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
