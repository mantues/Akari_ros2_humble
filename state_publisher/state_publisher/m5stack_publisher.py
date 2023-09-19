#!/usr/bin/env python
# coding:utf-8

import rclpy
from rclpy.node import Node
from akari_msgs.msg import M5
from akari_client import AkariClient


class m5stack_publisher(Node):
    def __init__(self):
        super().__init__("m5stack_publisher_node")
        self.publisher_ = self.create_publisher(M5, "/m5stack", 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.akari = AkariClient()
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    def timer_callback(self):
        msg = M5()
        msg.header.stamp = self.get_clock().now().to_msg()
        self.data = self.m5.get()
        msg.button_a = self.data["button_a"]
        msg.button_b = self.data["button_b"]
        msg.button_c = self.data["button_c"]
        msg.din0 = self.data["din0"]
        msg.din1 = self.data["din1"]
        msg.ain0 = self.data["ain0"]
        msg.dout0 = self.data["dout0"]
        msg.dout1 = self.data["dout1"]
        msg.temperature = self.data["temperature"]
        msg.brightness = self.data["brightness"]
        msg.pressure = self.data["pressure"]
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    publisher = m5stack_publisher()
    rclpy.spin(publisher)
    publisher.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()