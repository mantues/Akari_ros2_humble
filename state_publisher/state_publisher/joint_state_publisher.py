#!/usr/bin/env python
# coding:utf-8

from typing import Optional

import rclpy
from akari_client import AkariClient
from akari_msgs.msg import JointState
from rclpy.node import Node


class JointStatePublisher(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("joint_state_publisher_node")
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.akari_callback)
        self.state_publisher = self.create_publisher(JointState, "/joint_state", 10)
        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints

    def akari_callback(self) -> None:
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        joint_names = self.joints.get_joint_names()
        msg.name = [joint_names[0], joint_names[1]]

        velocities = self.joints.get_joint_velocities()
        msg.velocity = [velocities[(joint_names[0])], velocities[(joint_names[1])]]

        positions = self.joints.get_joint_positions()
        msg.position = [positions[(joint_names[0])], positions[(joint_names[1])]]

        accelerations = self.joints.get_joint_accelerations()
        msg.acceleration = [
            accelerations[(joint_names[0])],
            accelerations[(joint_names[1])],
        ]

        pan_status = self.joints.pan_joint.get_servo_enabled()
        tilt_status = self.joints.tilt_joint.get_servo_enabled()
        msg.enabled = [pan_status, tilt_status]

        moving_state = self.joints.get_moving_state()
        msg.moving_state = [
            moving_state[(joint_names[0])],
            moving_state[(joint_names[1])],
        ]

        self.state_publisher.publish(msg)


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    publisher = JointStatePublisher()
    rclpy.spin(publisher)
    publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
