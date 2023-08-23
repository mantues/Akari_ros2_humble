# generated from rosidl_generator_py/resource/_idl.py.em
# with input from akari_msgs:srv/SetServoStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_vel_array'
# Member 'joint_acc_array'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetServoStatus_Request(type):
    """Metaclass of message 'SetServoStatus_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('akari_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'akari_msgs.srv.SetServoStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_servo_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_servo_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_servo_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_servo_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_servo_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetServoStatus_Request(metaclass=Metaclass_SetServoStatus_Request):
    """Message class 'SetServoStatus_Request'."""

    __slots__ = [
        '_joint_name',
        '_joint_name_array',
        '_joint_vel_val',
        '_joint_vel_array',
        '_joint_acc_val',
        '_joint_acc_array',
        '_servo_enable',
        '_servo_enable_array',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'joint_name_array': 'sequence<string>',
        'joint_vel_val': 'float',
        'joint_vel_array': 'sequence<float>',
        'joint_acc_val': 'float',
        'joint_acc_array': 'sequence<float>',
        'servo_enable': 'boolean',
        'servo_enable_array': 'sequence<boolean>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        self.joint_name_array = kwargs.get('joint_name_array', [])
        self.joint_vel_val = kwargs.get('joint_vel_val', float())
        self.joint_vel_array = array.array('f', kwargs.get('joint_vel_array', []))
        self.joint_acc_val = kwargs.get('joint_acc_val', float())
        self.joint_acc_array = array.array('f', kwargs.get('joint_acc_array', []))
        self.servo_enable = kwargs.get('servo_enable', bool())
        self.servo_enable_array = kwargs.get('servo_enable_array', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_name != other.joint_name:
            return False
        if self.joint_name_array != other.joint_name_array:
            return False
        if self.joint_vel_val != other.joint_vel_val:
            return False
        if self.joint_vel_array != other.joint_vel_array:
            return False
        if self.joint_acc_val != other.joint_acc_val:
            return False
        if self.joint_acc_array != other.joint_acc_array:
            return False
        if self.servo_enable != other.servo_enable:
            return False
        if self.servo_enable_array != other.servo_enable_array:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @builtins.property
    def joint_name_array(self):
        """Message field 'joint_name_array'."""
        return self._joint_name_array

    @joint_name_array.setter
    def joint_name_array(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'joint_name_array' field must be a set or sequence and each value of type 'str'"
        self._joint_name_array = value

    @builtins.property
    def joint_vel_val(self):
        """Message field 'joint_vel_val'."""
        return self._joint_vel_val

    @joint_vel_val.setter
    def joint_vel_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_vel_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'joint_vel_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._joint_vel_val = value

    @builtins.property
    def joint_vel_array(self):
        """Message field 'joint_vel_array'."""
        return self._joint_vel_array

    @joint_vel_array.setter
    def joint_vel_array(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_vel_array' array.array() must have the type code of 'f'"
            self._joint_vel_array = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_vel_array' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_vel_array = array.array('f', value)

    @builtins.property
    def joint_acc_val(self):
        """Message field 'joint_acc_val'."""
        return self._joint_acc_val

    @joint_acc_val.setter
    def joint_acc_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_acc_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'joint_acc_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._joint_acc_val = value

    @builtins.property
    def joint_acc_array(self):
        """Message field 'joint_acc_array'."""
        return self._joint_acc_array

    @joint_acc_array.setter
    def joint_acc_array(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_acc_array' array.array() must have the type code of 'f'"
            self._joint_acc_array = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_acc_array' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_acc_array = array.array('f', value)

    @builtins.property
    def servo_enable(self):
        """Message field 'servo_enable'."""
        return self._servo_enable

    @servo_enable.setter
    def servo_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'servo_enable' field must be of type 'bool'"
        self._servo_enable = value

    @builtins.property
    def servo_enable_array(self):
        """Message field 'servo_enable_array'."""
        return self._servo_enable_array

    @servo_enable_array.setter
    def servo_enable_array(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'servo_enable_array' field must be a set or sequence and each value of type 'bool'"
        self._servo_enable_array = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetServoStatus_Response(type):
    """Metaclass of message 'SetServoStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('akari_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'akari_msgs.srv.SetServoStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_servo_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_servo_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_servo_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_servo_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_servo_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetServoStatus_Response(metaclass=Metaclass_SetServoStatus_Response):
    """Message class 'SetServoStatus_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_SetServoStatus(type):
    """Metaclass of service 'SetServoStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('akari_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'akari_msgs.srv.SetServoStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_servo_status

            from akari_msgs.srv import _set_servo_status
            if _set_servo_status.Metaclass_SetServoStatus_Request._TYPE_SUPPORT is None:
                _set_servo_status.Metaclass_SetServoStatus_Request.__import_type_support__()
            if _set_servo_status.Metaclass_SetServoStatus_Response._TYPE_SUPPORT is None:
                _set_servo_status.Metaclass_SetServoStatus_Response.__import_type_support__()


class SetServoStatus(metaclass=Metaclass_SetServoStatus):
    from akari_msgs.srv._set_servo_status import SetServoStatus_Request as Request
    from akari_msgs.srv._set_servo_status import SetServoStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
