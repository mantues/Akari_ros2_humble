from typing import Optional

import rclpy
from akari_msgs.msg import M5
from rclpy.node import Node


class M5Subscriber(Node):  # type: ignore
    def __init__(self) -> None:
        super().__init__("m5_subscriber")
        self.subscription = self.create_subscription(
            M5, "/m5stack", self.m5_callback, 10
        )
        self.subscription

    def m5_callback(self, msg: M5) -> None:
        self.get_logger().info("-------------------------------------")
        self.get_logger().info(
            f"time: {msg.header.stamp.sec}.{msg.header.stamp.nanosec}"
        )
        self.get_logger().info(
            f"   button a: {msg.button_a}, b: {msg.button_b}, c: {msg.button_c}"
        )
        self.get_logger().info(
            f"   din0: {msg.din0}, din1: {msg.din1}, ain0: {msg.ain0}"
        )
        self.get_logger().info(
            f"   dout0: {msg.dout0}, dout1: {msg.dout1}, pwmout0: {msg.pwmout0}"
        )
        self.get_logger().info(
            f"   temperature: {msg.temperature:.3f}, pressure: {msg.pressure:.3f}, \
                brightness: {msg.brightness}"
        )


def main(args: Optional[str] = None) -> None:
    rclpy.init(args=args)
    m5_subscriber = M5Subscriber()
    rclpy.spin(m5_subscriber)
    m5_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
