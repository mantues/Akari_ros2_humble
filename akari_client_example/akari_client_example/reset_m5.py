#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_msgs.srv import Trigger
from rclpy.node import Node


class ResetM5Client(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("display_reset_client_node")
        # create client
        self.cli = self.create_client(Trigger, "reset_m5")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")
        # create request
        self.req = Trigger.Request()


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    # create client
    client = ResetM5Client()

    print("STEP1. Reset M5")
    req = Trigger.Request()
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
