#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_client.position import Positions
from akari_msgs.srv import SetDisplayText
from rclpy.node import Node


class DisplayTextClient(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("display_text_client_node")
        # create client
        self.cli = self.create_client(SetDisplayText, "set_display_text")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    client = DisplayTextClient()

    print("STEP1. display 1.AKARI at top left")
    req = SetDisplayText.Request()
    req.text = "1.AKARI"
    req.pos_x = Positions.LEFT
    req.pos_y = Positions.TOP
    req.size = 5
    req.text_color = "BLACK"
    req.back_color = "WHITE"
    req.refresh = True
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP2. display 2.あかり at middle center")
    req = SetDisplayText.Request()
    req.text = "2.あかり"
    req.pos_x = Positions.CENTER
    req.pos_y = Positions.CENTER
    req.size = 6
    req.text_color = "BLUE"
    req.back_color = "YELLOW"
    req.refresh = True
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP3. display 3.灯り at (50,40) without background refresh")
    req = SetDisplayText.Request()
    req.text = "3.灯り"
    req.pos_x = 50
    req.pos_y = 40
    req.size = 3
    req.text_color = "WHITE"
    req.back_color = "RED"
    req.refresh = False
    client.future = client.cli.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP3. display 4.灯 at middle center")
    req = SetDisplayText.Request()
    req.text = "4.灯"
    req.pos_x = Positions.CENTER
    req.pos_y = Positions.CENTER
    req.size = 11
    req.text_color = "WHITE"
    req.back_color = "BLACK"
    req.refresh = True
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
