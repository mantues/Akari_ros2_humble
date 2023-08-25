// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from akari_msgs:srv/SetAllout.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "akari_msgs/srv/detail/set_allout__struct.h"
#include "akari_msgs/srv/detail/set_allout__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool akari_msgs__srv__set_allout__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("akari_msgs.srv._set_allout.SetAllout_Request", full_classname_dest, 44) == 0);
  }
  akari_msgs__srv__SetAllout_Request * ros_message = _ros_message;
  {  // dout0_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "dout0_val");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dout0_val = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dout1_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "dout1_val");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dout1_val = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pwmout0_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwmout0_val");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwmout0_val = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * akari_msgs__srv__set_allout__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetAllout_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("akari_msgs.srv._set_allout");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetAllout_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  akari_msgs__srv__SetAllout_Request * ros_message = (akari_msgs__srv__SetAllout_Request *)raw_ros_message;
  {  // dout0_val
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dout0_val ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dout0_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dout1_val
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dout1_val ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dout1_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwmout0_val
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pwmout0_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwmout0_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "akari_msgs/srv/detail/set_allout__struct.h"
// already included above
// #include "akari_msgs/srv/detail/set_allout__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool akari_msgs__srv__set_allout__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("akari_msgs.srv._set_allout.SetAllout_Response", full_classname_dest, 45) == 0);
  }
  akari_msgs__srv__SetAllout_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->result = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * akari_msgs__srv__set_allout__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetAllout_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("akari_msgs.srv._set_allout");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetAllout_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  akari_msgs__srv__SetAllout_Response * ros_message = (akari_msgs__srv__SetAllout_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
