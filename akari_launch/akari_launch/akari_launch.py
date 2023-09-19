from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    return LaunchDescription(
        [
            # node name
            Node(
                package="servo_server", executable="servo_server", name="servo_server"
            ),
            Node(package="m5_server", executable="m5_server", name="m5_server"),
            Node(
                package="state_publisher",
                executable="joint_state_publisher",
                name="joint_state_publisher",
            ),
            Node(
                package="state_publisher",
                executable="m5stack_publisher",
                name="m5stack_publisher",
            ),
        ]
    )
