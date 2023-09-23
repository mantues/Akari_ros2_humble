#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_msgs.srv import SetAllout, SetDout, SetPwmout, Trigger
from rclpy.node import Node


class SetPinoutClient(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("set_pinout_client_node")
        # create client
        self.cli_dout = self.create_client(SetDout, "set_dout")
        self.cli_pwmout = self.create_client(SetPwmout, "set_pwmout")
        self.cli_allout = self.create_client(SetAllout, "set_allout")
        self.cli_reset_allout = self.create_client(Trigger, "reset_allout")
        while (
            not self.cli_dout.wait_for_service(timeout_sec=1.0)
            and not self.cli_pwmout.wait_for_service(timeout_sec=1.0)
            and not self.cli_allout.wait_for_service(timeout_sec=1.0)
            and not self.cli_reset_allout.wait_for_service(timeout_sec=1.0)
        ):
            self.get_logger().info("service not available, waiting again...")


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    client = SetPinoutClient()

    print("STEP1. Set dout0 to Hi")
    req = SetDout.Request()
    req.pin_id = 0
    req.val = True
    client.future = client.cli_dout.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP2. Set pwmout0 to 200")
    req = SetPwmout.Request()
    req.pin_id = 0
    req.val = 200
    client.future = client.cli_pwmout.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP3. Set dout0: Lo, dout1: Hi, pwmout0: 100")
    req = SetAllout.Request()
    req.dout0_val = False
    req.dout1_val = True
    req.pwmout0_val = 100
    client.future = client.cli_allout.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("STEP4. Reset allout")
    req = Trigger.Request()
    client.future = client.cli_reset_allout.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("Finish!")
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
