# generated from rosidl_generator_py/resource/_idl.py.em
# with input from akari_msgs:srv/SetDisplayText.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetDisplayText_Request(type):
    """Metaclass of message 'SetDisplayText_Request'."""

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
                'akari_msgs.srv.SetDisplayText_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_display_text__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_display_text__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_display_text__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_display_text__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_display_text__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDisplayText_Request(metaclass=Metaclass_SetDisplayText_Request):
    """Message class 'SetDisplayText_Request'."""

    __slots__ = [
        '_text',
        '_pos_x',
        '_pos_y',
        '_size',
        '_text_color',
        '_back_color',
        '_refresh',
    ]

    _fields_and_field_types = {
        'text': 'string',
        'pos_x': 'int32',
        'pos_y': 'int32',
        'size': 'uint8',
        'text_color': 'string',
        'back_color': 'string',
        'refresh': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.text = kwargs.get('text', str())
        self.pos_x = kwargs.get('pos_x', int())
        self.pos_y = kwargs.get('pos_y', int())
        self.size = kwargs.get('size', int())
        self.text_color = kwargs.get('text_color', str())
        self.back_color = kwargs.get('back_color', str())
        self.refresh = kwargs.get('refresh', bool())

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
        if self.text != other.text:
            return False
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.size != other.size:
            return False
        if self.text_color != other.text_color:
            return False
        if self.back_color != other.back_color:
            return False
        if self.refresh != other.refresh:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @builtins.property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pos_x' field must be an integer in [-2147483648, 2147483647]"
        self._pos_x = value

    @builtins.property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pos_y' field must be an integer in [-2147483648, 2147483647]"
        self._pos_y = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'size' field must be an unsigned integer in [0, 255]"
        self._size = value

    @builtins.property
    def text_color(self):
        """Message field 'text_color'."""
        return self._text_color

    @text_color.setter
    def text_color(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text_color' field must be of type 'str'"
        self._text_color = value

    @builtins.property
    def back_color(self):
        """Message field 'back_color'."""
        return self._back_color

    @back_color.setter
    def back_color(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'back_color' field must be of type 'str'"
        self._back_color = value

    @builtins.property
    def refresh(self):
        """Message field 'refresh'."""
        return self._refresh

    @refresh.setter
    def refresh(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'refresh' field must be of type 'bool'"
        self._refresh = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetDisplayText_Response(type):
    """Metaclass of message 'SetDisplayText_Response'."""

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
                'akari_msgs.srv.SetDisplayText_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_display_text__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_display_text__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_display_text__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_display_text__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_display_text__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDisplayText_Response(metaclass=Metaclass_SetDisplayText_Response):
    """Message class 'SetDisplayText_Response'."""

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


class Metaclass_SetDisplayText(type):
    """Metaclass of service 'SetDisplayText'."""

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
                'akari_msgs.srv.SetDisplayText')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_display_text

            from akari_msgs.srv import _set_display_text
            if _set_display_text.Metaclass_SetDisplayText_Request._TYPE_SUPPORT is None:
                _set_display_text.Metaclass_SetDisplayText_Request.__import_type_support__()
            if _set_display_text.Metaclass_SetDisplayText_Response._TYPE_SUPPORT is None:
                _set_display_text.Metaclass_SetDisplayText_Response.__import_type_support__()


class SetDisplayText(metaclass=Metaclass_SetDisplayText):
    from akari_msgs.srv._set_display_text import SetDisplayText_Request as Request
    from akari_msgs.srv._set_display_text import SetDisplayText_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
