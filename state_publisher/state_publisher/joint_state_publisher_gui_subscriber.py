#!/usr/bin/env python
# coding:utf-8

from typing import Optional

import rclpy
from akari_client import AkariClient
from sensor_msgs.msg import JointState
from rclpy.node import Node

class JointStateSubscriber(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("joint_state_gui_subscriber_node")
        self.state_subscriber = self.create_subscription(JointState, "/joint_states", self.akari_callback, 10)
        self.state_subscriber
        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.joints.enable_all_servo()

    def akari_callback(self, msg) -> None:
        pan_pose = msg.position[0]
        tilt_pose = -1*msg.position[1]
        self.joints.move_joint_positions(pan = pan_pose, tilt = tilt_pose)


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    subscriber = JointStateSubscriber()
    rclpy.spin(subscriber)
    subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
