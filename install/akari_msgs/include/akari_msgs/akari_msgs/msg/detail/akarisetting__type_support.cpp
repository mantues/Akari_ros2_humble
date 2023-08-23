// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "akari_msgs/msg/detail/akarisetting__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace akari_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Akarisetting_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) akari_msgs::msg::Akarisetting(_init);
}

void Akarisetting_fini_function(void * message_memory)
{
  auto typed_message = static_cast<akari_msgs::msg::Akarisetting *>(message_memory);
  typed_message->~Akarisetting();
}

size_t size_function__Akarisetting__jointname(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Akarisetting__jointname(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Akarisetting__jointname(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Akarisetting__jointname(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Akarisetting__jointname(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Akarisetting__jointname(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Akarisetting__jointname(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Akarisetting__jointname(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Akarisetting__jointpositions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Akarisetting__jointpositions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Akarisetting__jointpositions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Akarisetting__jointpositions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Akarisetting__jointpositions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Akarisetting__jointpositions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Akarisetting__jointpositions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Akarisetting__jointpositions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Akarisetting__jointvelocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Akarisetting__jointvelocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Akarisetting__jointvelocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Akarisetting__jointvelocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Akarisetting__jointvelocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Akarisetting__jointvelocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Akarisetting__jointvelocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Akarisetting__jointvelocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Akarisetting__jointaccelerations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Akarisetting__jointaccelerations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Akarisetting__jointaccelerations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Akarisetting__jointaccelerations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Akarisetting__jointaccelerations(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Akarisetting__jointaccelerations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Akarisetting__jointaccelerations(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Akarisetting__jointaccelerations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Akarisetting__servoenabled(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__Akarisetting__servoenabled(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__Akarisetting__servoenabled(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__Akarisetting__servoenabled(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Akarisetting__servomovingstate(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__Akarisetting__servomovingstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__Akarisetting__servomovingstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__Akarisetting__servomovingstate(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Akarisetting_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "jointname",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, jointname),  // bytes offset in struct
    nullptr,  // default value
    size_function__Akarisetting__jointname,  // size() function pointer
    get_const_function__Akarisetting__jointname,  // get_const(index) function pointer
    get_function__Akarisetting__jointname,  // get(index) function pointer
    fetch_function__Akarisetting__jointname,  // fetch(index, &value) function pointer
    assign_function__Akarisetting__jointname,  // assign(index, value) function pointer
    resize_function__Akarisetting__jointname  // resize(index) function pointer
  },
  {
    "jointpositions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, jointpositions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Akarisetting__jointpositions,  // size() function pointer
    get_const_function__Akarisetting__jointpositions,  // get_const(index) function pointer
    get_function__Akarisetting__jointpositions,  // get(index) function pointer
    fetch_function__Akarisetting__jointpositions,  // fetch(index, &value) function pointer
    assign_function__Akarisetting__jointpositions,  // assign(index, value) function pointer
    resize_function__Akarisetting__jointpositions  // resize(index) function pointer
  },
  {
    "jointvelocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, jointvelocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__Akarisetting__jointvelocities,  // size() function pointer
    get_const_function__Akarisetting__jointvelocities,  // get_const(index) function pointer
    get_function__Akarisetting__jointvelocities,  // get(index) function pointer
    fetch_function__Akarisetting__jointvelocities,  // fetch(index, &value) function pointer
    assign_function__Akarisetting__jointvelocities,  // assign(index, value) function pointer
    resize_function__Akarisetting__jointvelocities  // resize(index) function pointer
  },
  {
    "jointaccelerations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, jointaccelerations),  // bytes offset in struct
    nullptr,  // default value
    size_function__Akarisetting__jointaccelerations,  // size() function pointer
    get_const_function__Akarisetting__jointaccelerations,  // get_const(index) function pointer
    get_function__Akarisetting__jointaccelerations,  // get(index) function pointer
    fetch_function__Akarisetting__jointaccelerations,  // fetch(index, &value) function pointer
    assign_function__Akarisetting__jointaccelerations,  // assign(index, value) function pointer
    resize_function__Akarisetting__jointaccelerations  // resize(index) function pointer
  },
  {
    "servoenabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, servoenabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__Akarisetting__servoenabled,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__Akarisetting__servoenabled,  // fetch(index, &value) function pointer
    assign_function__Akarisetting__servoenabled,  // assign(index, value) function pointer
    resize_function__Akarisetting__servoenabled  // resize(index) function pointer
  },
  {
    "servomovingstate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(akari_msgs::msg::Akarisetting, servomovingstate),  // bytes offset in struct
    nullptr,  // default value
    size_function__Akarisetting__servomovingstate,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__Akarisetting__servomovingstate,  // fetch(index, &value) function pointer
    assign_function__Akarisetting__servomovingstate,  // assign(index, value) function pointer
    resize_function__Akarisetting__servomovingstate  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Akarisetting_message_members = {
  "akari_msgs::msg",  // message namespace
  "Akarisetting",  // message name
  7,  // number of fields
  sizeof(akari_msgs::msg::Akarisetting),
  Akarisetting_message_member_array,  // message members
  Akarisetting_init_function,  // function to initialize message memory (memory has to be allocated)
  Akarisetting_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Akarisetting_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Akarisetting_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace akari_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<akari_msgs::msg::Akarisetting>()
{
  return &::akari_msgs::msg::rosidl_typesupport_introspection_cpp::Akarisetting_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, akari_msgs, msg, Akarisetting)() {
  return &::akari_msgs::msg::rosidl_typesupport_introspection_cpp::Akarisetting_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
