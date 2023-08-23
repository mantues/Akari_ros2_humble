# generated from rosidl_generator_py/resource/_idl.py.em
# with input from akari_msgs:msg/Akarisetting.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'jointpositions'
# Member 'jointvelocities'
# Member 'jointaccelerations'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Akarisetting(type):
    """Metaclass of message 'Akarisetting'."""

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
                'akari_msgs.msg.Akarisetting')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__akarisetting
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__akarisetting
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__akarisetting
            cls._TYPE_SUPPORT = module.type_support_msg__msg__akarisetting
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__akarisetting

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Akarisetting(metaclass=Metaclass_Akarisetting):
    """Message class 'Akarisetting'."""

    __slots__ = [
        '_header',
        '_jointname',
        '_jointpositions',
        '_jointvelocities',
        '_jointaccelerations',
        '_servoenabled',
        '_servomovingstate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'jointname': 'sequence<string>',
        'jointpositions': 'sequence<float>',
        'jointvelocities': 'sequence<float>',
        'jointaccelerations': 'sequence<float>',
        'servoenabled': 'sequence<boolean>',
        'servomovingstate': 'sequence<boolean>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.jointname = kwargs.get('jointname', [])
        self.jointpositions = array.array('f', kwargs.get('jointpositions', []))
        self.jointvelocities = array.array('f', kwargs.get('jointvelocities', []))
        self.jointaccelerations = array.array('f', kwargs.get('jointaccelerations', []))
        self.servoenabled = kwargs.get('servoenabled', [])
        self.servomovingstate = kwargs.get('servomovingstate', [])

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
        if self.header != other.header:
            return False
        if self.jointname != other.jointname:
            return False
        if self.jointpositions != other.jointpositions:
            return False
        if self.jointvelocities != other.jointvelocities:
            return False
        if self.jointaccelerations != other.jointaccelerations:
            return False
        if self.servoenabled != other.servoenabled:
            return False
        if self.servomovingstate != other.servomovingstate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def jointname(self):
        """Message field 'jointname'."""
        return self._jointname

    @jointname.setter
    def jointname(self, value):
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
                "The 'jointname' field must be a set or sequence and each value of type 'str'"
        self._jointname = value

    @builtins.property
    def jointpositions(self):
        """Message field 'jointpositions'."""
        return self._jointpositions

    @jointpositions.setter
    def jointpositions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'jointpositions' array.array() must have the type code of 'f'"
            self._jointpositions = value
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
                "The 'jointpositions' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jointpositions = array.array('f', value)

    @builtins.property
    def jointvelocities(self):
        """Message field 'jointvelocities'."""
        return self._jointvelocities

    @jointvelocities.setter
    def jointvelocities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'jointvelocities' array.array() must have the type code of 'f'"
            self._jointvelocities = value
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
                "The 'jointvelocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jointvelocities = array.array('f', value)

    @builtins.property
    def jointaccelerations(self):
        """Message field 'jointaccelerations'."""
        return self._jointaccelerations

    @jointaccelerations.setter
    def jointaccelerations(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'jointaccelerations' array.array() must have the type code of 'f'"
            self._jointaccelerations = value
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
                "The 'jointaccelerations' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jointaccelerations = array.array('f', value)

    @builtins.property
    def servoenabled(self):
        """Message field 'servoenabled'."""
        return self._servoenabled

    @servoenabled.setter
    def servoenabled(self, value):
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
                "The 'servoenabled' field must be a set or sequence and each value of type 'bool'"
        self._servoenabled = value

    @builtins.property
    def servomovingstate(self):
        """Message field 'servomovingstate'."""
        return self._servomovingstate

    @servomovingstate.setter
    def servomovingstate(self, value):
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
                "The 'servomovingstate' field must be a set or sequence and each value of type 'bool'"
        self._servomovingstate = value
