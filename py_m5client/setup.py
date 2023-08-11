import os
from glob import glob
from setuptools import setup

package_name = 'py_m5client'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    package_data={
        '': [
            'akari_msgs',
        ]
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='akariros',
    maintainer_email='akariros@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'm5publisher = py_m5client.m5stack_publisher:main',
            'm5client_display_color = py_m5client.py_m5client_display_color:main',
            'm5client_display_text = py_m5client.py_m5client_display_text:main',
            'm5client_display_image = py_m5client.py_m5client_display_image:main',
            'm5client_display_reset = py_m5client.py_m5client_display_reset:main',
            'm5client_move_joints_actionclient = py_m5client.py_m5client_move_joints_actionclient:main',
            'm5client_set_allout = py_m5client.py_m5client_set_allout:main',
            'm5client_set_dout = py_m5client.py_m5client_set_dout:main',
            'm5client_set_pwmout = py_m5client.py_m5client_set_pwmout:main',
            'm5client_reset_allout = py_m5client.py_m5client_reset_allout:main',
            'm5client_servo_set = py_m5client.py_m5client_servoset:main',
        ],
    },
)
