#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node

from akari_msgs.srv import SetDisplayColor

from akari_client import AkariClient
from akari_client.color import Color

import random

color_pair = ['BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
                'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
                'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK','RESET', 'RANDOM', 'SELECT']

class display_color_client(Node):

    def __init__(self):
        super().__init__('display_color_client_node')
        # create client
        self.cli = self.create_client(SetDisplayColor, 'set_display_color')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # create request
        self.req = SetDisplayColor.Request()

        self.random_color = Color(
                red=random.randint(0, 255),
                green=random.randint(0, 255),
                blue=random.randint(0, 255),
            )

    def send_request(self):
        choice = random.choice(color_pair)
        self.req.color = choice
        if choice == 'SELECT':
            self.req.color_var = [random.randint(0, 255),
                                    random.randint(0, 255),
                                    random.randint(0, 255)]
        else:
            self.req.color_var = [0, 0, 0]


        self.get_logger().info('Change color : %s' % (self.req))

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init()
    # create client
    client = display_color_client()
    # send request
    response = client.send_request()
    client.get_logger().info('Result: : %s' %(str(response.result)))
    client.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
