#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_msgs.srv import SetJointBool, SetJointFloat, SetJointPos, SetDisplayText
from rclpy.node import Node

from akari_client.position import Positions

class ServoClient(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("servo_client_node")
        self.cli_pos = self.create_client(SetJointPos, "move_joint")
        self.cli_vel = self.create_client(SetJointFloat, "set_joint_vel")
        self.cli_acc = self.create_client(SetJointFloat, "set_joint_acc")
        self.cli_enable = self.create_client(SetJointBool, "set_joint_enable")
        # create client
        self.cli = self.create_client(SetDisplayText, "set_display_text")
        while (
            not self.cli_pos.wait_for_service(timeout_sec=1.0)
            and self.cli_vel.wait_for_service(timeout_sec=1.0)
            and self.cli_acc.wait_for_service(timeout_sec=1.0)
            and self.cli_enabled.wait_for_service(timeout_sec=1.0)
        ):
            self.get_logger().info("service not available, waiting again...")


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    client = ServoClient()

    client.get_logger().info("STEP4. Move to initial pos")
    req = SetJointPos.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [0.0, 0.5]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(1)

    print("STEP2. display あけまして at middle center")
    req = SetDisplayText.Request()
    req.text = "あけまして"
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
    time.sleep(1)
    
    client.get_logger().info("STEP6. Move tilt pos to -0.3 rad")
    req = SetJointPos.Request()
    req.joint_name = ["tilt"]
    req.val = [-0.3]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(1)

    print("STEP2. display あけましておめでとうございます at middle center")
    req = SetDisplayText.Request()
    req.text = "あけまして\nおめでとう"
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
    time.sleep(1)

    client.get_logger().info("STEP9. Move to initial pos")
    req = SetJointPos.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [0.0, 0.0]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(1)

    print("STEP2. display あけましておめでとうございます at middle center")
    req = SetDisplayText.Request()
    req.text = "あけまして\nおめでとう\nございます"
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
    time.sleep(1)
    
    print("Finish!")
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
