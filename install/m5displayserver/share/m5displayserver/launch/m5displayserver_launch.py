from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # node name
        Node(
            package='m5displayserver',
            executable='m5displayserver',
            name='m5displayserver'
        )
    ])
