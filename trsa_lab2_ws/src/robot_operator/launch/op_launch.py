from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node


def generate_launch_description():
    # Create a launch description
    ld = LaunchDescription()


    goal_pub_node = Node(
        package="robot_operator",
        executable="goal_pub_server",
        name="goal_pub_server",
        output="screen",
    )
    ld.add_action(goal_pub_node)
    object_identidier_node = Node(
        package="robot_operator",
        executable="image_recon",
        name="image_recon",
        output="screen",
    )
    ld.add_action(object_identidier_node)


    return ld
