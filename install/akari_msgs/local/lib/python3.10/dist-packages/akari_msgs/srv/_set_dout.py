# generated from rosidl_generator_py/resource/_idl.py.em
# with input from akari_msgs:srv/SetDout.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetDout_Request(type):
    """Metaclass of message 'SetDout_Request'."""

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
                'akari_msgs.srv.SetDout_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_dout__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_dout__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_dout__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_dout__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_dout__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDout_Request(metaclass=Metaclass_SetDout_Request):
    """Message class 'SetDout_Request'."""

    __slots__ = [
        '_pin_id',
        '_val',
    ]

    _fields_and_field_types = {
        'pin_id': 'uint8',
        'val': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pin_id = kwargs.get('pin_id', int())
        self.val = kwargs.get('val', bool())

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
        if self.pin_id != other.pin_id:
            return False
        if self.val != other.val:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pin_id(self):
        """Message field 'pin_id'."""
        return self._pin_id

    @pin_id.setter
    def pin_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pin_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pin_id' field must be an unsigned integer in [0, 255]"
        self._pin_id = value

    @builtins.property
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'val' field must be of type 'bool'"
        self._val = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetDout_Response(type):
    """Metaclass of message 'SetDout_Response'."""

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
                'akari_msgs.srv.SetDout_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_dout__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_dout__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_dout__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_dout__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_dout__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDout_Response(metaclass=Metaclass_SetDout_Response):
    """Message class 'SetDout_Response'."""

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


class Metaclass_SetDout(type):
    """Metaclass of service 'SetDout'."""

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
                'akari_msgs.srv.SetDout')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_dout

            from akari_msgs.srv import _set_dout
            if _set_dout.Metaclass_SetDout_Request._TYPE_SUPPORT is None:
                _set_dout.Metaclass_SetDout_Request.__import_type_support__()
            if _set_dout.Metaclass_SetDout_Response._TYPE_SUPPORT is None:
                _set_dout.Metaclass_SetDout_Response.__import_type_support__()


class SetDout(metaclass=Metaclass_SetDout):
    from akari_msgs.srv._set_dout import SetDout_Request as Request
    from akari_msgs.srv._set_dout import SetDout_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
