#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.msg import M5
from akari_msgs.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText,
                               Trigger, SetServoStatus)

from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
import random
import time
import os
import sys

id_pair = [0,1]

class m5client(Node):

    def __init__(self):
        super().__init__('m5client_set_servo_node')
        # create client
        self.cli = self.create_client(SetServoStatus, 'set_servo_status')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetServoStatus.Request()

        self.akari = AkariClient()
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    def send_request(self):
        self.req.joint_name = 'pan'
        self.req.joint_acc_val = random.uniform(0.15, 0.5)
        self.req.joint_vel_val = random.uniform(0.15, 0.25)
        self.req.servo_enable = True
        
        self.get_logger().info('OUTPUT acc: %s vel %s' % (str(self.req.joint_acc_val), str(self.req.joint_vel_val)))

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
