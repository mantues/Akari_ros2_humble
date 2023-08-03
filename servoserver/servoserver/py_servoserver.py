import rclpy

from rclpy.node import Node
from rclpy.action import ActionServer

from akari_msgs.msg import M5
from akari_msgs.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText,
                               Trigger)
from akari_msgs.action import (MoveJoint)
from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
import random
import time
import os
import sys
from std_msgs.msg import Int32MultiArray

# server
class m5server(Node):
    def __init__(self):
        super().__init__("velocity_service")

        # create action service JOINTS
        self._move_joint_action_srv = ActionServer(self, MoveJoint, 'move_joints', self.move_joints)

        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    # ACTION CALL BACK
    # callback
    def move_joints(self, action_msg):
        # enable servo
        self.joints.enable_all_servo()
        feedback = MoveJoint.Feedback()
        feedback.pos_pan = self.joints.get_joint_positions()['pan']
        feedback.pos_tilt = self.joints.get_joint_positions()['tilt']

        acc_pan = action_msg.request.acc_pan
        acc_tilt = action_msg.request.acc_tilt
        vel_pan = action_msg.request.vel_pan
        vel_tilt = action_msg.request.vel_tilt
        goal_pan = action_msg.request.goal_pan
        goal_tilt = action_msg.request.goal_tilt
        self.joints.set_joint_accelerations(pan=acc_pan,tilt=acc_tilt)
        self.joints.set_joint_velocities(pan=vel_pan,tilt=vel_tilt)
        self.joints.move_joint_positions(pan=goal_pan,tilt=goal_tilt)
        
        while self.joints.get_moving_state == 0:
            # feedback
            action_msg.publish_feedback(feedback)
            self.get_logger().info('ACTION server pan: %s tilt: %s' % (str(goal_tilt), str(goal_pan)))
        action_msg.succeed()
        result = MoveJoint.Result()

        return result

def main(args=None):
    rclpy.init(args=args)

    # create service
    server = m5server()

    rclpy.spin(server)

    rclpy.shutdown()

if __name__ == "__main__":
    main()
