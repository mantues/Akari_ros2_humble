#!/usr/bin/env python
# coding:utf-8

from typing import Optional

import rclpy
#from akari_client import AkariClient
from akari_msgs.srv import SetJointPos
from rclpy.node import Node
from sensor_msgs.msg import JointState
import time
import state_publisher.path_generator

class SimServoServer(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("sim_servo_server")
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.akari_callback)
        # create service service JOINTS for simulator
        self._sim_servo_pos_srv = self.create_service(
            SetJointPos, "move_joint", self.move_joint_subscriber
        )
        # create publisher
        self.state_publisher = self.create_publisher(JointState, "/joint_states", 10)
        
        self.akari_pan = 0.0
        self.akari_tilt = 0.0
        # SETTING AKARI
        #self.akari = AkariClient()
        #self.joints = self.akari.joints

    # SERVER CALL BACK
    def akari_callback(self) -> None:
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ["pan", "tilt"]
        msg.position = [self.akari_pan, -1 * self.akari_tilt]
        #msg.velocity = [self.akari_pan, -1 * self.akari_tilt]
        
        self.state_publisher.publish(msg)
        
    def move_joint_subscriber(
        self, request: SetJointPos.Request, response: SetJointPos.Response
    ) -> SetJointPos.Response:
        msg = JointState()
        msg.name = ["pan", "tilt"]
        pan_pos: Optional[float] = None
        tilt_pos: Optional[float] = None
        acc = 0.005
        vcc_max = 0.03
        path_pan = [self.akari_pan]
        path_tilt = [self.akari_tilt]
        for index, name in enumerate(request.joint_name):
            # set_servo
            if name == "pan":
                pan_pos = request.val[index]
                #self.akari_pan = request.val[index]
                path_pan = state_publisher.path_generator.path_plotter(VMAX=vcc_max, ACC=acc, D1=self.akari_pan,  D2=pan_pos)
            elif name == "tilt":
                tilt_pos = request.val[index]
                #self.akari_tilt = request.val[index]
                path_tilt = state_publisher.path_generator.path_plotter(VMAX=vcc_max, ACC=acc, D1=self.akari_tilt,  D2=tilt_pos)
        path_pan_fix, path_tilt_fix = state_publisher.path_generator.merge_list(path_pan, path_tilt)
        
        for i in range(len(path_pan_fix)):
            msg.header.stamp = self.get_clock().now().to_msg()
            self.get_logger().info(f"Position: {self.akari_pan, self.akari_tilt}")
            
            self.akari_pan = path_pan_fix[i]
            self.akari_tilt = path_tilt_fix[i]
            msg.position = [self.akari_pan, -1 * self.akari_tilt]
            self.state_publisher.publish(msg)            
            time.sleep(0.1)
            
        self.get_logger().info(f"Result: {self.akari_pan, self.akari_tilt}")
        response.result = True
        
        #self.get_logger().info(f"Result: {self.akari_pan}")
        try:
            #msg.position = [pan_pos, -1 * tilt_pos]
            #self.state_publisher.publish(msg)
            print('JOINT STATE')
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response



def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    subscriber = SimServoServer()
    rclpy.spin(subscriber)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
