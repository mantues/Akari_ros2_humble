import os
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    # Specify the name of the package and path to xacro file within the package
    pkg_name = 'state_publisher'
    
    file_subpath = os.path.join(pkg_name, "urdf", "akari.urdf")
    
    rviz = os.path.join(pkg_name, "rviz", "akari.rviz")

    model_dir = get_package_prefix('state_publisher')
    print(model_dir)
    #install_dir = os.path.join(get_package_share_directory('state_publisher'),'akari_gazebo_model')
    #os.environ['GAZEBO_MODEL_PATH'] = install_dir
    #print(install_dir)
    
    xacro_file = os.path.join(get_package_share_directory(pkg_name), "akari_gazebo_model", "akari_gazebo.urdf.xacro")
    robot_description_raw = xacro.process_file(xacro_file).toxml()
    
    # Configure the node
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        arguments=[file_subpath],
        parameters=[{'robot_description': robot_description_raw}]
    )

    # Configure the node
    node_robot_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        arguments=[file_subpath]
    )


    # Configure the node
    node_rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        arguments=['-d' + rviz]
    )
    
    # Gazebo launch
    gazebo =         ExecuteProcess(
            cmd=["gazebo", "--verbose", "-s", "libgazebo_ros_factory.so"],
            )

    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-entity', 'akari_spawn', '-topic', '/robot_description'],
                        output='screen')
    
    load_joint_state_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'start', 'joint_state_broadcaster'],
        output='screen'
    )
    
    load_akari_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_start_controller', 'akari_controller'],
        output='screen'
    )
    
    # Run the node
    return LaunchDescription([
        node_robot_state_publisher,
        #node_robot_state_publisher_gui,
        #node_rviz2,
        #load_joint_state_controller,
        #load_akari_controller,
        gazebo,
        spawn_entity
    ])
