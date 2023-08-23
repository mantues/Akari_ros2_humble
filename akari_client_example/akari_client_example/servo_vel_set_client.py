#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.msg import M5
from akari_msgs.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText,
                               Trigger, SetServoStatus,
                               SetJointBool, SetJointFloat)

from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
import random
import time
import os
import sys

class m5client(Node):

    def __init__(self):
        super().__init__('m5client_set_servo_vel_node')
        # create client
        self.cli = self.create_client(SetJointFloat, 'set_joint_vel')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetJointFloat.Request()

        self.akari = AkariClient()
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    def send_request(self):
        self.req.joint_name = ['pan', 'tilt']
        pan_val = random.uniform(0.15, 2.5)
        tilt_val = random.uniform(0.15, 2.5)
        self.req.val = [pan_val, tilt_val]
        
        self.get_logger().info('Request velocity pan : %s tilt : %s' % (str(pan_val), str(tilt_val)))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main():
    rclpy.init()
    # create client
    client = m5client()
    # send request
    response = client.send_request()
    client.get_logger().info('Result: : %s' %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
