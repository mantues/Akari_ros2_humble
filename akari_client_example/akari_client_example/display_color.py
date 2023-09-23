#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_msgs.srv import SetDisplayColor, SetDisplayColorRgb
from rclpy.node import Node


class DisplayColorClient(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("display_color_client_node")
        self.cli_color = self.create_client(SetDisplayColor, "set_display_color")
        self.cli_color_rgb = self.create_client(
            SetDisplayColorRgb, "set_display_color_rgb"
        )
        while not self.cli_color.wait_for_service(
            timeout_sec=1.0
        ) and self.cli_color_rgb.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    client = DisplayColorClient()

    print("STEP1. Set display color to white")
    req = SetDisplayColor.Request()
    req.color = "WHITE"
    client.future = client.cli_color.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP1. Set display color to red")
    req = SetDisplayColor.Request()
    req.color = "RED"
    client.future = client.cli_color.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP1. Set display color to (0, 255, 0)")
    req = SetDisplayColorRgb.Request()
    req.r = 0
    req.g = 255
    req.b = 0
    client.future = client.cli_color_rgb.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("Finish!")
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
