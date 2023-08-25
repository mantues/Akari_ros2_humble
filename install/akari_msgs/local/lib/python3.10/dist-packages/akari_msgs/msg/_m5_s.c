// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from akari_msgs:msg/M5.idl
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
#include "akari_msgs/msg/detail/m5__struct.h"
#include "akari_msgs/msg/detail/m5__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool akari_msgs__msg__m5__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[22];
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
    assert(strncmp("akari_msgs.msg._m5.M5", full_classname_dest, 21) == 0);
  }
  akari_msgs__msg__M5 * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // button_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_c");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_c = (Py_True == field);
    Py_DECREF(field);
  }
  {  // din0
    PyObject * field = PyObject_GetAttrString(_pymsg, "din0");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->din0 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // din1
    PyObject * field = PyObject_GetAttrString(_pymsg, "din1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->din1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ain0
    PyObject * field = PyObject_GetAttrString(_pymsg, "ain0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ain0 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dout0
    PyObject * field = PyObject_GetAttrString(_pymsg, "dout0");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dout0 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dout1
    PyObject * field = PyObject_GetAttrString(_pymsg, "dout1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dout1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pwmout0
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwmout0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwmout0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brightness
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightness");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brightness = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imu_ax
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_ax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_ax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_ay
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_ay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_ay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_az
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_az");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_az = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_gx
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_gx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_gy
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_gy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_gz
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_gz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // general0
    PyObject * field = PyObject_GetAttrString(_pymsg, "general0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->general0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // general1
    PyObject * field = PyObject_GetAttrString(_pymsg, "general1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->general1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * akari_msgs__msg__m5__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of M5 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("akari_msgs.msg._m5");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "M5");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  akari_msgs__msg__M5 * ros_message = (akari_msgs__msg__M5 *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_c
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_c ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // din0
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->din0 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "din0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // din1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->din1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "din1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ain0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ain0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ain0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dout0
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dout0 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dout0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dout1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dout1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dout1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwmout0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pwmout0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwmout0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brightness
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brightness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_ax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_ax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_ax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_ay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_ay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_ay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_az
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_az);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_az", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_gx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_gy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_gz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // general0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->general0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "general0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // general1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->general1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "general1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
