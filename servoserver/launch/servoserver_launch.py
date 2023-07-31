from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # node name
        Node(
            package='servoserver',
            executable='m5servoserver',
            name='m5servoserver'
        )
    ])