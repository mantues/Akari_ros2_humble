#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from akari_msgs.action import MoveJoint

import random

class move_joints_action_client(Node):

    def __init__(self):
        super().__init__('move_joints_action_client_node')
        # create action client
        self._action_client = ActionClient(self, MoveJoint, 'move_joints')
        while not self._action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

    def send_goal(self):
        goal_msg = MoveJoint.Goal()
        goal_pan = random.uniform(-1.0, 1.0)
        goal_tilt = random.uniform(-0.5, 0.5)
        acc_pan = 0.15
        acc_tilt = 0.15
        vel_pan = 0.15
        vel_tilt = 0.15
        goal_msg.goal_pan = goal_pan
        goal_msg.goal_tilt = goal_tilt
        goal_msg.acc_pan = acc_pan
        goal_msg.acc_tilt = acc_tilt
        goal_msg.vel_pan = vel_pan
        goal_msg.vel_tilt = vel_tilt
        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

        return self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.result))
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback pan: {0}'.format(feedback.pos_pan))
        self.get_logger().info('Received feedback tilt: {0}'.format(feedback.pos_tilt))


def main(args=None):
    rclpy.init()
    # create client
    action_client = move_joints_action_client()
    # send request
    future = action_client.send_goal()
    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()
