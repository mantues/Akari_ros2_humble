#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_msgs.srv import SetJointBool, SetJointFloat, SetJointPos
from rclpy.node import Node


class ServoClient(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("servo_client_node")
        self.cli_pos = self.create_client(SetJointPos, "move_joint")
        self.cli_vel = self.create_client(SetJointFloat, "set_joint_vel")
        self.cli_acc = self.create_client(SetJointFloat, "set_joint_acc")
        self.cli_enable = self.create_client(SetJointBool, "set_joint_enable")
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

    client.get_logger().info("STEP1. Set both servo enable")
    req = SetJointBool.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [True, True]
    client.future = client.cli_enable.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP2. Set both servo vel at 10 rad/s")
    req = SetJointFloat.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [10.0, 10.0]
    client.future = client.cli_vel.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP3. Set both servo acc at 10 rad/s^2")
    req = SetJointFloat.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [10.0, 10.0]
    client.future = client.cli_acc.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP4. Move to initial pos")
    req = SetJointPos.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [0.0, 0.0]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP5. Move pan pos to 0.5 rad")
    req = SetJointPos.Request()
    req.joint_name = ["pan"]
    req.val = [0.5]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP6. Move tilt pos to -0.3 rad")
    req = SetJointPos.Request()
    req.joint_name = ["tilt"]
    req.val = [-0.3]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP7. Set both servo vel at 3 rad/s")
    req = SetJointFloat.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [3.0, 3.0]
    client.future = client.cli_vel.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP8. Move (pan,tilt) to (-0.2, 0.4) rad")
    req = SetJointPos.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [-0.2, 0.4]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP9. Move to initial pos")
    req = SetJointPos.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [0.0, 0.0]
    req.sync = True
    client.future = client.cli_pos.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    client.get_logger().info("STEP10. Servo off")
    req = SetJointBool.Request()
    req.joint_name = ["pan", "tilt"]
    req.val = [False, False]
    client.future = client.cli_enable.call_async(req)
    rclpy.spin_until_future_complete(client, client.future)
    client.get_logger().info(f"Result: : {client.future.result().result}")
    print("")
    time.sleep(2)

    print("Finish!")
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
