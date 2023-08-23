import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from akari_msgs.msg import M5
from akari_msgs.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText,
                               Trigger, SetServoStatus,
                               SetJointBool, SetJointFloat)
                               
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
        super().__init__("servo_enable_service")

        # create service OUT
        self._servo_acc_srv = self.create_service(SetJointBool, 'set_joint_enable', self.set_servo_status)

        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    # DISPLAY CALL BACK
    # callback
    def set_servo_status(self, request, response):
        req_joint_list = request.joint_name
        # set_servo
        if req_joint_list[0] == 'pan':
            req_enable = request.val[0]
            
            self.joints.set_servo_enabled(pan=req_enable)
            self.get_logger().info('Change pan enable : %s' % str(req_enable))
            response.result = True
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME pan IS INVALID')
            response.result = False
                        
        if req_joint_list[1] == 'tilt':
            req_enable = request.val[1]
            
            self.joints.set_servo_enabled(tilt=req_enable)
            self.get_logger().info('Change tilt enable : %s' % (str(req_enable)))
            response.result = True
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME tilt IS INVALID')
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
