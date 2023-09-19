#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.srv import SetDout

from akari_client import AkariClient

import random

id_pair = [0,1]

class set_dout_client(Node):

    def __init__(self):
        super().__init__("set_dout_client_node")
        # create client
        self.cli = self.create_client(SetDout, "set_dout_m5")
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info("service not available, waiting again...")

        # create request
        self.req = SetDout.Request()

    def send_request(self):
        self.req.pin_id = random.choice(id_pair)
        self.req.val = True
        self.get_logger().info("OUTPUT ID: %s" % (self.req.pin_id))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args = None):
    rclpy.init(args = args)
    # create client
    client = set_dout_client()
    # send request
    response = client.send_request()
    client.get_logger().info("Result: : %s" %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()
