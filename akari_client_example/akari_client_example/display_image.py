#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.srv import SetDisplayImage

from akari_client import AkariClient
from akari_client.position import Positions
import random

file_pair = ["/jpg/logo320_ex.jpg", "/jpg/logo320.jpg", "/jpg/waiting.jpg"]


pos_pair = [Positions.CENTER, Positions.LEFT, Positions.TOP,
             Positions.RIGHT, Positions.BOTTOM]

class display_image_client(Node):

    def __init__(self):
        super().__init__('display_image_client_node')
        # create client
        self.cli = self.create_client(SetDisplayImage, 'set_display_image')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetDisplayImage.Request()

    def send_request(self):
        filepath = random.choice(file_pair)
        self.req.filepath = filepath
        pos_x = random.choice(pos_pair)
        self.req.pos_x = pos_x
        pos_y = random.choice(pos_pair)
        self.req.pos_y = pos_y
        scale = random.uniform(0.5, 1.0)
        self.req.scale = scale
        self.get_logger().info('filepath: %s scale: %s X: %s Y: %s' % (str(filepath), str(scale),  str(pos_x),  str(pos_y)))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args = None):
    rclpy.init(args = args)
    # create client
    client = display_image_client()
    # send request
    response = client.send_request()
    client.get_logger().info('Result: : %s' %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
