#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_client.position import Positions
from akari_msgs.srv import SetDisplayImage
from rclpy.node import Node


class DisplayImageClient(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("display_image_client_node")
        # create client
        self.cli = self.create_client(SetDisplayImage, "set_display_image")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    client = DisplayImageClient()

    print("STEP1. display /jpg/logo320_ex.jpg")
    req = SetDisplayImage.Request()
    req.filepath = "/jpg/logo320_ex.jpg"
    req.pos_x = Positions.CENTER
    req.pos_y = Positions.CENTER
    req.scale = 1.0
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP2. display /jpg/logo320.jpg at x0.3 at bottom right")
    req = SetDisplayImage.Request()
    req.filepath = "/jpg/logo320.jpg"
    req.pos_x = Positions.RIGHT
    req.pos_y = Positions.BOTTOM
    req.scale = 0.7
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP3. display /jpg/logo320_ex.jpg at x0.3 at (50,20)")
    req = SetDisplayImage.Request()
    req.filepath = "/jpg/logo320.jpg"
    req.pos_x = 50
    req.pos_y = 20
    req.scale = 0.3
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP4. display /jpg/logo320.jpg at center")
    req = SetDisplayImage.Request()
    req.filepath = "/jpg/logo320.jpg"
    req.pos_x = Positions.CENTER
    req.pos_y = Positions.CENTER
    req.scale = 1.0
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("Finish!")
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
