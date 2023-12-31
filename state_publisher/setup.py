import os
from glob import glob

from setuptools import setup

package_name = "state_publisher"

setup(
    name=package_name,
    version="0.0.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        (
            os.path.join("share", package_name, "launch"),
            glob(os.path.join("launch", "*launch.[pxy][yma]*")),
        ),
        (
            os.path.join("share", package_name, "urdf"),
            glob(os.path.join("urdf/*")),
        ),
        (
            os.path.join("share", package_name, "rviz"),
            glob(os.path.join("rviz/*")),
        ),
        (
            os.path.join("share", package_name, "akari_gazebo_model"),
            glob(os.path.join("models/*")),
        ),
        (
            os.path.join("share", package_name, "akari_gazebo_yaml"),
            glob(os.path.join("yamls/*")),
        ),
        (
            os.path.join("share", package_name, "akari_gazebo_world"),
            glob(os.path.join("worlds/*")),
        ),
        (
            os.path.join("share", package_name, "image"),
            glob(os.path.join("image/*.png")),
        ),
        (
            os.path.join("share", package_name, "font"),
            glob(os.path.join("font/*.ttf")),
        ),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="akariros",
    maintainer_email="akariros@todo.todo",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "joint_state_publisher = state_publisher.joint_state_publisher:main",
            "joint_state_publisher_gui_subscriber = state_publisher.joint_state_publisher_gui_subscriber:main",
            "m5stack_publisher = state_publisher.m5stack_publisher:main",
            "sim_servo_server = state_publisher.sim_servo_server:main",
            "sim_servo_client = state_publisher.sim_servo_client:main",
            "sim_m5_server = state_publisher.sim_m5_server:main",
        ],
    },
)
