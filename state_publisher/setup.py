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
            glob(os.path.join("akari_gazebo/model/*")),
        ),
        (
            os.path.join("share", package_name, "akari_gazebo_world"),
            glob(os.path.join("akari_gazebo/world/*")),
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
            "m5stack_publisher = state_publisher.m5stack_publisher:main",
            "spawn_akari = state_publisher.spawn_akari:main",
        ],
    },
)
