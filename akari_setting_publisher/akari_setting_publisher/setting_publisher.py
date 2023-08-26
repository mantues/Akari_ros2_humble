#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.msg import Akarisetting

from akari_client import AkariClient

class akari_setting_publisher(Node):

    def __init__(self):
        super().__init__('akari_setting_publisher_node')
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.akari_callback)
        self.akarisettingpublisher = self.create_publisher(Akarisetting, 'akarisettingstates', 10)
        
        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
                
    def akari_callback(self):
        msg = Akarisetting()
        msg.header.stamp = self.get_clock().now().to_msg()
        jointnames = self.joints.get_joint_names()
        msg.jointname = [jointnames[0], jointnames[1]]
        
        velocities = self.joints.get_joint_velocities()
        msg.jointvelocities = [velocities[(jointnames[0])], velocities[(jointnames[1])]]
        
        positions = self.joints.get_joint_positions()
        msg.jointpositions = [positions[(jointnames[0])], positions[(jointnames[1])]]
        
        accelerations = self.joints.get_joint_accelerations()
        msg.jointaccelerations = [accelerations[(jointnames[0])], accelerations[(jointnames[1])]]
        
        #servoenabled = self.joints.get_servo_enabled()
        #msg.servoenabled = [servoenabled[(jointnames[0])], servoenabled[(jointnames[1])]]
        pan_status = self.joints.pan_joint.get_servo_enabled()
        tilt_status = self.joints.tilt_joint.get_servo_enabled()
        msg.servoenabled = [pan_status, tilt_status]
        
        servomovingstate = self.joints.get_moving_state()
        msg.servomovingstate = [servomovingstate[(jointnames[0])], servomovingstate[(jointnames[1])]]
        
        self.akarisettingpublisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    _publisher = akari_setting_publisher()

    rclpy.spin(_publisher)
    
    _publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
