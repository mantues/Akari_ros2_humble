import os
import xacro
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.substitutions import LaunchConfiguration
def generate_launch_descript
ion():
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    robot_name = 'state_publisher'
    world_file_name = 'empty.world'

    world = os.path.join(get_package_share_directory(
        robot_name), 'akari_gazebo_world', world_file_name)

    urdf = os.path.join(get_package_share_directory(
        robot_name), 'urdf', 'akari.urdf')

    xml = open(urdf, 'r').read()

    xml = xml.replace('"', '\\"')

    swpan_args = '{name: \"my_robot\", xml: \"' + xml + '\" }'

    file_path = get_package_share_directory(robot_name)
    #os.environ['GAZEBO_MODEL_PATH'] =  file_path + "/share/state_publisher/akari_gazebo_model"
    os.environ['GAZEBO_MODEL_PATH'] = os.path.join(get_package_share_directory('state_publisher'), 'akari_gazebo_model')
    
    #os.environ['GAZEBO_PLUGIN_PATH'] = file_path + "/share/state_publisher/akari_gazebo_model"

    return LaunchDescription([
        ExecuteProcess(
            cmd=['gazebo', '--verbose', world,
                 '-s', 'libgazebo_ros_factory.so'],
            output='screen'),

        ExecuteProcess(
            cmd=['ros2', 'param', 'set', '/gazebo',
                 'use_sim_time', use_sim_time],
            output='screen'),

        ExecuteProcess(
            cmd=['ros2', 'service', 'call', '/spawn_akari',
                 'gazebo_msgs/SpawnEntity', swpan_args],
            output='screen'),
    ])
