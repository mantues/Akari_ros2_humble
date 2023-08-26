#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.msg import M5
from akari_msgs.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText,
                               Trigger, 
                               SetJointBool, SetJointFloat)

from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
import random
import time
import os
import sys

class client_servo_enable_set(Node):

    def __init__(self):
        super().__init__('servo_enable_set_client_node')
        # create client
        self.cli = self.create_client(SetJointBool, 'set_joint_enable')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetJointBool.Request()

    def send_request(self):
        self.req.joint_name = ['pan', 'tilt']
        pan_val = random.choice([True, False])
        tilt_val = random.choice([True, False])
        self.req.val = [pan_val, tilt_val]
        
        self.get_logger().info('Request enable pan : %s tilt : %s' % (str(pan_val), str(tilt_val)))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init()
    # create client
    client = client_servo_enable_set()
    # send request
    response = client.send_request()
    client.get_logger().info('Result: : %s' %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
