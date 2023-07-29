from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # node name
        Node(
            package='py_m5client',
            executable='m5server',
            name='m5server'
        )
    ])
