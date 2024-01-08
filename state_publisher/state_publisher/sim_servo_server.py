#!/usr/bin/env python
# coding:utf-8

from typing import Optional

import rclpy
#from akari_client import AkariClient
from akari_msgs.srv import SetJointPos
from rclpy.node import Node
from sensor_msgs.msg import JointState
import time

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
        del_pan_pose = 0.0
        del_tilt_pose = 0.0
        num = 40
        for index, name in enumerate(request.joint_name):
            # set_servo
            if name == "pan":
                pan_pos = request.val[index]
                #self.akari_pan = request.val[index]
                del_pan_pose = (pan_pos - self.akari_pan)/num
            elif name == "tilt":
                tilt_pos = request.val[index]
                #self.akari_tilt = request.val[index]
                del_tilt_pose = (tilt_pos - self.akari_tilt)/num
        for i in range(num):
            msg.header.stamp = self.get_clock().now().to_msg()
            self.akari_pan += del_pan_pose
            self.akari_tilt += del_tilt_pose
            msg.position = [self.akari_pan, -1 * self.akari_tilt]
            self.state_publisher.publish(msg)
            time.sleep(0.05)
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
