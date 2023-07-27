# generated from rosidl_generator_py/resource/_idl.py.em
# with input from akari_msgs:msg/M5.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_M5(type):
    """Metaclass of message 'M5'."""

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
                'akari_msgs.msg.M5')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__m5
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__m5
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__m5
            cls._TYPE_SUPPORT = module.type_support_msg__msg__m5
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__m5

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


class M5(metaclass=Metaclass_M5):
    """Message class 'M5'."""

    __slots__ = [
        '_header',
        '_button_a',
        '_button_b',
        '_button_c',
        '_din0',
        '_din1',
        '_ain0',
        '_dout0',
        '_dout1',
        '_pwmout0',
        '_temperature',
        '_pressure',
        '_brightness',
        '_imu_ax',
        '_imu_ay',
        '_imu_az',
        '_imu_gx',
        '_imu_gy',
        '_imu_gz',
        '_imu_pitch',
        '_imu_roll',
        '_imu_yaw',
        '_general0',
        '_general1',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'button_a': 'boolean',
        'button_b': 'boolean',
        'button_c': 'boolean',
        'din0': 'boolean',
        'din1': 'boolean',
        'ain0': 'uint16',
        'dout0': 'boolean',
        'dout1': 'boolean',
        'pwmout0': 'uint8',
        'temperature': 'float',
        'pressure': 'float',
        'brightness': 'uint16',
        'imu_ax': 'float',
        'imu_ay': 'float',
        'imu_az': 'float',
        'imu_gx': 'float',
        'imu_gy': 'float',
        'imu_gz': 'float',
        'imu_pitch': 'float',
        'imu_roll': 'float',
        'imu_yaw': 'float',
        'general0': 'float',
        'general1': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.button_a = kwargs.get('button_a', bool())
        self.button_b = kwargs.get('button_b', bool())
        self.button_c = kwargs.get('button_c', bool())
        self.din0 = kwargs.get('din0', bool())
        self.din1 = kwargs.get('din1', bool())
        self.ain0 = kwargs.get('ain0', int())
        self.dout0 = kwargs.get('dout0', bool())
        self.dout1 = kwargs.get('dout1', bool())
        self.pwmout0 = kwargs.get('pwmout0', int())
        self.temperature = kwargs.get('temperature', float())
        self.pressure = kwargs.get('pressure', float())
        self.brightness = kwargs.get('brightness', int())
        self.imu_ax = kwargs.get('imu_ax', float())
        self.imu_ay = kwargs.get('imu_ay', float())
        self.imu_az = kwargs.get('imu_az', float())
        self.imu_gx = kwargs.get('imu_gx', float())
        self.imu_gy = kwargs.get('imu_gy', float())
        self.imu_gz = kwargs.get('imu_gz', float())
        self.imu_pitch = kwargs.get('imu_pitch', float())
        self.imu_roll = kwargs.get('imu_roll', float())
        self.imu_yaw = kwargs.get('imu_yaw', float())
        self.general0 = kwargs.get('general0', float())
        self.general1 = kwargs.get('general1', float())

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
        if self.button_a != other.button_a:
            return False
        if self.button_b != other.button_b:
            return False
        if self.button_c != other.button_c:
            return False
        if self.din0 != other.din0:
            return False
        if self.din1 != other.din1:
            return False
        if self.ain0 != other.ain0:
            return False
        if self.dout0 != other.dout0:
            return False
        if self.dout1 != other.dout1:
            return False
        if self.pwmout0 != other.pwmout0:
            return False
        if self.temperature != other.temperature:
            return False
        if self.pressure != other.pressure:
            return False
        if self.brightness != other.brightness:
            return False
        if self.imu_ax != other.imu_ax:
            return False
        if self.imu_ay != other.imu_ay:
            return False
        if self.imu_az != other.imu_az:
            return False
        if self.imu_gx != other.imu_gx:
            return False
        if self.imu_gy != other.imu_gy:
            return False
        if self.imu_gz != other.imu_gz:
            return False
        if self.imu_pitch != other.imu_pitch:
            return False
        if self.imu_roll != other.imu_roll:
            return False
        if self.imu_yaw != other.imu_yaw:
            return False
        if self.general0 != other.general0:
            return False
        if self.general1 != other.general1:
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
    def button_a(self):
        """Message field 'button_a'."""
        return self._button_a

    @button_a.setter
    def button_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_a' field must be of type 'bool'"
        self._button_a = value

    @builtins.property
    def button_b(self):
        """Message field 'button_b'."""
        return self._button_b

    @button_b.setter
    def button_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_b' field must be of type 'bool'"
        self._button_b = value

    @builtins.property
    def button_c(self):
        """Message field 'button_c'."""
        return self._button_c

    @button_c.setter
    def button_c(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_c' field must be of type 'bool'"
        self._button_c = value

    @builtins.property
    def din0(self):
        """Message field 'din0'."""
        return self._din0

    @din0.setter
    def din0(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'din0' field must be of type 'bool'"
        self._din0 = value

    @builtins.property
    def din1(self):
        """Message field 'din1'."""
        return self._din1

    @din1.setter
    def din1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'din1' field must be of type 'bool'"
        self._din1 = value

    @builtins.property
    def ain0(self):
        """Message field 'ain0'."""
        return self._ain0

    @ain0.setter
    def ain0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ain0' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ain0' field must be an unsigned integer in [0, 65535]"
        self._ain0 = value

    @builtins.property
    def dout0(self):
        """Message field 'dout0'."""
        return self._dout0

    @dout0.setter
    def dout0(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dout0' field must be of type 'bool'"
        self._dout0 = value

    @builtins.property
    def dout1(self):
        """Message field 'dout1'."""
        return self._dout1

    @dout1.setter
    def dout1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dout1' field must be of type 'bool'"
        self._dout1 = value

    @builtins.property
    def pwmout0(self):
        """Message field 'pwmout0'."""
        return self._pwmout0

    @pwmout0.setter
    def pwmout0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwmout0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pwmout0' field must be an unsigned integer in [0, 255]"
        self._pwmout0 = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pressure = value

    @builtins.property
    def brightness(self):
        """Message field 'brightness'."""
        return self._brightness

    @brightness.setter
    def brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brightness' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'brightness' field must be an unsigned integer in [0, 65535]"
        self._brightness = value

    @builtins.property
    def imu_ax(self):
        """Message field 'imu_ax'."""
        return self._imu_ax

    @imu_ax.setter
    def imu_ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_ax' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_ax' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_ax = value

    @builtins.property
    def imu_ay(self):
        """Message field 'imu_ay'."""
        return self._imu_ay

    @imu_ay.setter
    def imu_ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_ay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_ay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_ay = value

    @builtins.property
    def imu_az(self):
        """Message field 'imu_az'."""
        return self._imu_az

    @imu_az.setter
    def imu_az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_az' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_az' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_az = value

    @builtins.property
    def imu_gx(self):
        """Message field 'imu_gx'."""
        return self._imu_gx

    @imu_gx.setter
    def imu_gx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_gx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_gx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_gx = value

    @builtins.property
    def imu_gy(self):
        """Message field 'imu_gy'."""
        return self._imu_gy

    @imu_gy.setter
    def imu_gy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_gy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_gy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_gy = value

    @builtins.property
    def imu_gz(self):
        """Message field 'imu_gz'."""
        return self._imu_gz

    @imu_gz.setter
    def imu_gz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_gz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_gz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_gz = value

    @builtins.property
    def imu_pitch(self):
        """Message field 'imu_pitch'."""
        return self._imu_pitch

    @imu_pitch.setter
    def imu_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_pitch = value

    @builtins.property
    def imu_roll(self):
        """Message field 'imu_roll'."""
        return self._imu_roll

    @imu_roll.setter
    def imu_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_roll = value

    @builtins.property
    def imu_yaw(self):
        """Message field 'imu_yaw'."""
        return self._imu_yaw

    @imu_yaw.setter
    def imu_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imu_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imu_yaw = value

    @builtins.property
    def general0(self):
        """Message field 'general0'."""
        return self._general0

    @general0.setter
    def general0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'general0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'general0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._general0 = value

    @builtins.property
    def general1(self):
        """Message field 'general1'."""
        return self._general1

    @general1.setter
    def general1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'general1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'general1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._general1 = value
