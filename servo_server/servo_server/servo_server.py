#!/usr/bin/env python
# coding:utf-8

import rclpy

from typing import Optional
from rclpy.node import Node
from rclpy.action import ActionServer

from akari_msgs.srv import SetJointBool, SetJointFloat, SetJointPos
from akari_msgs.action import MoveJoint
from akari_client import AkariClient

joint_pair = ["pan", "tilt"]


# server
class servo_server(Node):
    def __init__(self):
        super().__init__("servo_serer_node")
        # create action service JOINTS
        self._move_joint_action = ActionServer(
            self, MoveJoint, "move_joint", self.move_joints_action
        )
        # create action service JOINTS
        self._servo_pos_srv = self.create_service(
            SetJointPos, "move_joint", self.move_joints
        )
        # create service servo acc set
        self._servo_acc_srv = self.create_service(
            SetJointFloat, "set_joint_acc", self.set_servo_acc
        )
        # create service servo vel set
        self._servo_acc_srv = self.create_service(
            SetJointFloat, "set_joint_vel", self.set_servo_vel
        )
        # create service servo enable set
        self._servo_acc_srv = self.create_service(
            SetJointBool, "set_joint_enable", self.set_servo_enable
        )
        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints

    # ACTION CALL BACK
    def move_joints_action(self, action_msg):
        # enable servo
        self.joints.enable_all_servo()
        feedback = MoveJoint.Feedback()
        goal_pan = action_msg.request.goal_pan
        goal_tilt = action_msg.request.goal_tilt
        self.joints.move_joint_positions(pan=goal_pan, tilt=goal_tilt)
        # feedback
        pan_state = self.joints.get_moving_state()["pan"]
        tilt_state = self.joints.get_moving_state()["tilt"]
        while pan_state == False or tilt_state == False:
            self.get_logger().info(
                "SERVO state: %s" % (str(self.joints.get_moving_state()))
            )
            feedback.pos_pan = self.joints.get_joint_positions()["pan"]
            feedback.pos_tilt = self.joints.get_joint_positions()["tilt"]
            action_msg.publish_feedback(feedback)
            pan_state = self.joints.get_moving_state()["pan"]
            tilt_state = self.joints.get_moving_state()["tilt"]
        self.get_logger().info(
            "GOAL pan: %s tilt: %s" % (str(goal_pan), str(goal_tilt))
        )
        action_msg.succeed()
        result = MoveJoint.Result()
        return result

    # SERVER CALL BACK
    # servo acc set
    def move_joints(self, request, response):
        pan_pos: Optional[float] = None
        tilt_pos: Optional[float] = None
        for index, name in enumerate(request.joint_name):
            # set_servo
            if name == "pan":
                pan_pos = request.val[index]
            elif name == "tilt":
                tilt_pos = request.val[index]
        response.result = True
        try:
            self.joints.move_joint_positions(
                pan=pan_pos, tilt=tilt_pos, sync=request.sync
            )
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    # servo vel set
    def set_servo_vel(self, request, response):
        pan_vel: Optional[float] = None
        tilt_vel: Optional[float] = None
        for index, name in enumerate(request.joint_name):
            # set_servo
            if name == "pan":
                pan_vel = request.val[index]
            elif name == "tilt":
                tilt_vel = request.val[index]
        response.result = True
        try:
            self.joints.set_joint_velocities(pan=pan_vel, tilt=tilt_vel)
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    # servo vel set
    def set_servo_acc(self, request, response):
        pan_acc: Optional[float] = None
        tilt_acc: Optional[float] = None
        for index, name in enumerate(request.joint_name):
            # set_servo
            if name == "pan":
                pan_acc = request.val[index]
            elif name == "tilt":
                tilt_acc = request.val[index]
        response.result = True
        try:
            self.joints.set_joint_accelerations(pan=pan_acc, tilt=tilt_acc)
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    # servo enable set
    def set_servo_enable(self, request, response):
        pan_enable: Optional[bool] = None
        tilt_enable: Optional[bool] = None
        for index, name in enumerate(request.joint_name):
            # set_servo
            if name == "pan":
                pan_enable = request.val[index]
            elif name == "tilt":
                tilt_enable = request.val[index]
        response.result = True
        try:
            self.joints.set_servo_enabled(pan=pan_enable, tilt=tilt_enable)
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response


def main(args=None):
    rclpy.init(args=args)
    server = servo_server()
    rclpy.spin(server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
