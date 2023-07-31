import rclpy
from rclpy.node import Node
from rclpy.duration import Duration

from sensor_msgs.msg import JointState
from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray
from std_msgs.msg import Int32

from akari_msgs.msg import Akarisetting

from akari_msgs.action import (MoveJoint)
from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions

import time
import threading

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('akarisettingpublisher')
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.akarisettingpublisher = self.create_publisher(Akarisetting, 'akarisettingstates', 10)
        
        # SETTING AKARI
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()
                
    def timer_callback(self):
        msg = Akarisetting()
        msg.header.stamp = self.get_clock().now().to_msg()
        jointnames = self.joints.get_joint_names()
        msg.jointname = [jointnames[0], jointnames[1]]
        
        velocities = self.joints.get_joint_velocities()
        msg.jointvelocities = [velocities[(jointnames[0])], velocities[(jointnames[1])]]
        
        positions = self.joints.get_joint_positions()
        msg.jointpositions = [positions[(jointnames[0])], positions[(jointnames[1])]]
        
        accelerations = self.joints.get_joint_accelerations()
        msg.jointaccelerations = [accelerations[(jointnames[0])], accelerations[(jointnames[1])]]
        
        #servoenabled = self.joints.get_servo_enabled()
        #msg.servoenabled = [servoenabled[(jointnames[0])], servoenabled[(jointnames[1])]]
        
        servomovingstate = self.joints.get_moving_state()
        msg.servomovingstate = [servomovingstate[(jointnames[0])], servomovingstate[(jointnames[1])]]
        
        self.akarisettingpublisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
