#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import JointState

from akari_client import AkariClient

class akari_joitstate_publisher(Node):

    def __init__(self):
        super().__init__('akari_joitstate_publisher_node')
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.akari_callback)
        self.akaristatepublisher = self.create_publisher(JointState, 'akari_joint_states', 10)
        
        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
                
    def akari_callback(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        jointnames = self.joints.get_joint_names()
        msg.name = [jointnames[0], jointnames[1]]
        
        positions = self.joints.get_joint_positions()
        msg.position = [positions[str(jointnames[0])], positions[str(jointnames[1])]]
        
        
        self.akaristatepublisher.publish(msg)


def main(args = None):
    rclpy.init(args = args)

    _publisher = akari_joitstate_publisher()

    rclpy.spin(_publisher)
    
    _publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
