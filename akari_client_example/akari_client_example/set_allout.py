#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.srv import SetAllout

from akari_client import AkariClient

import random

class m5client_set_allout(Node):

    def __init__(self):
        super().__init__('set_allout_client_node')
        # create client
        self.cli = self.create_client(SetAllout, 'set_allout_m5')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetAllout.Request()

    def send_request(self):
        dout0_val = random.choice([True, False])
        self.req.dout0_val = dout0_val
        dout1_val = random.choice([True, False])
        self.req.dout1_val = dout1_val
        pwmout0_val = random.randint(0, 255)
        self.req.pwmout0_val = pwmout0_val
        self.get_logger().info('ID0: %s ID1: %s Value: %s' % (str(dout0_val), str(dout1_val),  str(pwmout0_val)))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init()
    # create client
    client = m5client_set_allout()
    # send request
    response = client.send_request()
    client.get_logger().info('Result: : %s' %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
