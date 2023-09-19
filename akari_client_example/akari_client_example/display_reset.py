#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.srv import Trigger

from akari_client import AkariClient

class display_reset_client(Node):

    def __init__(self):
        super().__init__("display_reset_client_node")
        # create client
        self.cli = self.create_client(
        Trigger, "reset_m5"
        )while not self.cli_color.wait_for_service(
            timeout_sec=1.0
        ) and self.cli_color_rgb.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")
        # create request
        self.req = Trigger.Request()

    def send_request(self):
        self.get_logger().info("M5Stack reset")
        
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)
    # create client
    client = display_reset_client()
    # send request
    response = client.send_request()
    client.get_logger().info("Result: : %s" %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()
