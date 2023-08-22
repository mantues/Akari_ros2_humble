import rclpy

from rclpy.node import Node
from rclpy.action import ActionServer

from akari_msgs.msg import M5
from akari_msgs.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText,
                               Trigger, SetServoStatus)
from akari_msgs.action import (MoveJoint)
from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
import random
import time
import os
import sys
from std_msgs.msg import Int32MultiArray

joint_pair = ['pan','tilt']


# server
class m5server(Node):
    def __init__(self):
        super().__init__("servo_service")

        # create service OUT
        self._set_dout_srv = self.create_service(SetServoStatus, 'set_servo_status', self.set_servo_status)
        

        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    # DISPLAY CALL BACK
    # callback
    def set_servo_status(self, request, response):
        req_joint = request.joint_name
        # self.get_logger().info('Change joint : %s' % (str(req_joint)))
        # set_servo
        if req_joint in joint_pair:
            if req_joint == 'pan':
                req_acc = request.joint_acc_val
                req_vel = request.joint_vel_val
                req_enable = request.servo_enable
                
                self.joints.set_joint_accelerations(pan=req_acc)
                self.joints.set_joint_velocities(pan=req_vel)
                self.joints.set_servo_enabled(pan=req_enable)
                self.get_logger().info('Change joint : %s' % (str(req_joint)))
                self.get_logger().info('acc:: %s, vel: %s, enable: %s' % (str(req_acc), str(req_vel), str(req_enable)))
                
            elif req_color == 'tilt':
                self.m5.reset_m5()
                req_acc = request.joint_acc_val
                req_vel = request.joint_vel_val
                req_enable = request.servo_enable
                
                self.joints.set_joint_accelerations(tilt=req_acc)
                self.joints.set_joint_velocities(tilt=req_vel)
                self.joints.set_servo_enabled(tilt=req_enable)
                self.get_logger().info('Change joint : %s' % (str(req_joint)))
                
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME IS INVALID')
            response.result = False
        return response

def main(args=None):
    rclpy.init(args=args)

    # create service
    server = m5server()

    rclpy.spin(server)

    rclpy.shutdown()

if __name__ == "__main__":
    main()
