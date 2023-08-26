#!/usr/bin/env python
# coding:utf-8

import rclpy

from rclpy.node import Node
from rclpy.action import ActionServer

from akari_msgs.srv import  SetJointBool, SetJointFloat
from akari_msgs.action import MoveJoint
from akari_client import AkariClient

joint_pair = ['pan','tilt']

# server
class servo_server(Node):
    def __init__(self):
        super().__init__("servo_serer_node")

        # create action service JOINTS
        self._move_joint_action_srv = ActionServer(self, MoveJoint, 'move_joints', self.move_joints_action)
        # create service servo acc set
        self._servo_acc_srv = self.create_service(SetJointFloat, 'set_joint_acc', self.set_servo_acc)
        # create service servo vel set
        self._servo_acc_srv = self.create_service(SetJointFloat, 'set_joint_vel', self.set_servo_vel)
        # create service servo enable set
        self._servo_acc_srv = self.create_service(SetJointBool, 'set_joint_enable', self.set_servo_enable)

        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints

    # ACTION CALL BACK
    def move_joints_action(self, action_msg):
        # enable servo
        self.joints.enable_all_servo()
        feedback = MoveJoint.Feedback()

        acc_pan = action_msg.request.acc_pan
        acc_tilt = action_msg.request.acc_tilt
        vel_pan = action_msg.request.vel_pan
        vel_tilt = action_msg.request.vel_tilt
        goal_pan = action_msg.request.goal_pan
        goal_tilt = action_msg.request.goal_tilt
        self.joints.set_joint_accelerations(pan=acc_pan,tilt=acc_tilt)
        self.joints.set_joint_velocities(pan=vel_pan,tilt=vel_tilt)
        self.joints.move_joint_positions(pan=goal_pan,tilt=goal_tilt)
        
        # feedback
        pan_state = self.joints.get_moving_state()['pan']
        tilt_state = self.joints.get_moving_state()['tilt']
        while (pan_state == False or tilt_state == False):
            self.get_logger().info('SERVO state: %s' % (str(self.joints.get_moving_state())))
            feedback.pos_pan = self.joints.get_joint_positions()['pan']
            feedback.pos_tilt = self.joints.get_joint_positions()['tilt']
            action_msg.publish_feedback(feedback)
            pan_state = self.joints.get_moving_state()['pan']
            tilt_state = self.joints.get_moving_state()['tilt']
        self.get_logger().info('GOAL pan: %s tilt: %s' % (str(goal_tilt), str(goal_pan)))
        action_msg.succeed()
        result = MoveJoint.Result()

        return result

    # SERVER CALL BACK
    # servo acc set
    def set_servo_acc(self, request, response):
        req_joint_list = request.joint_name
        
        # set_servo
        if req_joint_list[0] == 'pan':
            req_acc = request.val[0]
            
            self.joints.set_joint_accelerations(pan=req_acc)
            self.get_logger().info('Change pan acc : %s' % str(req_acc))
            response.result = True
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME pan IS INVALID')
            response.result = False
                        
        if req_joint_list[1] == 'tilt':
            req_acc = request.val[1]
            
            self.joints.set_joint_accelerations(tilt=req_acc)
            self.get_logger().info('Change tilt acc : %s' % (str(req_acc)))
            response.result = True
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME tilt IS INVALID')
            response.result = False
            
        return response
        
    # servo vel set
    def set_servo_vel(self, request, response):
        req_joint_list = request.joint_name
        # set_servo
        if req_joint_list[0] == 'pan':
            req_vel = request.val[0]
            
            self.joints.set_joint_velocities(pan=req_vel)
            self.get_logger().info('Change pan acc : %s' % str(req_vel))
            response.result = True
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME pan IS INVALID')
            response.result = False
                        
        if req_joint_list[1] == 'tilt':
            req_vel = request.val[1]
            
            self.joints.set_joint_velocities(tilt=req_vel)
            self.get_logger().info('Change tilt acc : %s' % (str(req_vel)))
            response.result = True
            
        else:
            self.m5.reset_m5()
            self.get_logger().info('JOINT NAME tilt IS INVALID')
            response.result = False
            
        return response
        
    # servo enable set
    def set_servo_enable(self, request, response):
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
    server = servo_server()

    rclpy.spin(server)

    rclpy.shutdown()

if __name__ == "__main__":
    main()
