#!/usr/bin/env python
# coding:utf-8

import time
from typing import Optional

import rclpy
from akari_msgs.action import MoveJoint
from rclpy.action import ActionClient
from rclpy.executors import Future
from rclpy.node import Node


class move_joints_action_client(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("move_joints_action_client_node")
        self._action_client = ActionClient(self, MoveJoint, "move_joint")
        while not self._action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")

    def goal_response_callback(self, future: Future) -> None:
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected")
            return
        self.get_logger().info("Goal accepted")
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future: Future) -> None:
        result = future.result().result
        self.get_logger().info("Result: {0}".format(result.result))

    def feedback_callback(self, feedback_msg: MoveJoint.Feedback) -> None:
        feedback = feedback_msg.feedback
        self.get_logger().info(f"pan: {feedback.pos_pan:.3f}")
        self.get_logger().info(f"tilt: {feedback.pos_tilt:.3f}")


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    client = move_joints_action_client()

    print("STEP1. Move to (-0.7, 0.3)")
    goal_msg = MoveJoint.Goal()
    goal_msg.goal_pan = -0.7
    goal_msg.goal_tilt = 0.3
    client._action_client.wait_for_server()
    client._send_goal_future = client._action_client.send_goal_async(
        goal_msg, feedback_callback=client.feedback_callback
    )
    client._send_goal_future.add_done_callback(client.goal_response_callback)
    future = client._action_client.send_goal_async(
        goal_msg, feedback_callback=client.feedback_callback
    )
    rclpy.spin_until_future_complete(client, future)
    print("")
    time.sleep(2)

    print("STEP2. Move to (0.0, 0.0)")
    goal_msg = MoveJoint.Goal()
    goal_msg.goal_pan = 0.0
    goal_msg.goal_tilt = 0.0
    client._action_client.wait_for_server()
    client._send_goal_future = client._action_client.send_goal_async(
        goal_msg, feedback_callback=client.feedback_callback
    )
    client._send_goal_future.add_done_callback(client.goal_response_callback)
    future = client._action_client.send_goal_async(
        goal_msg, feedback_callback=client.feedback_callback
    )
    rclpy.spin_until_future_complete(client, future)
    print("")
    time.sleep(2)

    print("Finish!")
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
