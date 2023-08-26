#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.srv import SetPwmout

from akari_client import AkariClient

import random


class set_pwmout_client(Node):

    def __init__(self):
        super().__init__('set_pwmout_client_node')
        # create client
        self.cli = self.create_client(SetPwmout, 'set_pwmout_m5')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetPwmout.Request()

    def send_request(self):
        self.req.pin_id = 0
        self.req.val = random.randint(0, 255)
        self.get_logger().info('OUTPUT Value: %s' % (self.req.val))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init()
    # create client
    client = set_pwmout_client()
    # send request
    response = client.send_request()
    client.get_logger().info('Result: : %s' %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
