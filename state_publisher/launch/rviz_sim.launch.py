import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition, UnlessCondition

def generate_launch_description():

    package_dir = get_package_share_directory("state_publisher")
    urdf = os.path.join(package_dir, "urdf", "akari.urdf")
    rviz = os.path.join(package_dir, "rviz", "akari_image.rviz")

    return LaunchDescription([

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            arguments=[urdf]),
                
        Node(
            package='state_publisher',
            executable='sim_servo_server',
            name='sim_servo_server',
            output='screen'),
        
        Node(
            package='state_publisher',
            executable='sim_m5_server',
            name='sim_m5_server',
            output='screen'),
        
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            arguments=['-d' + rviz]),
    ])
