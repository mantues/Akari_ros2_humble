import rclpy
from rclpy.node import Node

from akari_msgs.msg import JointState


class JointStateSubscriber(Node):
    def __init__(self):
        super().__init__("servo_subscriber")
        self.subscription = self.create_subscription(
            JointState, "/joint_state", self.servo_callback, 10
        )
        self.subscription

    def servo_callback(self, msg):
        self.get_logger().info("-------------------------------------")
        self.get_logger().info(
            f"time: {msg.header.stamp.sec}.{msg.header.stamp.nanosec}"
        )
        for i in range (0,len(msg.name)):
            self.get_logger().info(f"  joint name: {msg.name[i]}")
            self.get_logger().info(f"    position: {msg.position[i]:.3f}")
            self.get_logger().info(f"    velocity: {msg.velocity[i]:.3f}")
            self.get_logger().info(f"    acceleration: {msg.acceleration[i]:.3f}")
            self.get_logger().info(f"    enabled: {msg.enabled[i]}")
            self.get_logger().info(f"    state: {msg.moving_state[i]}")


def main(args=None):
    rclpy.init(args=args)
    servo_subscriber = JointStateSubscriber()
    rclpy.spin(servo_subscriber)
    servo_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
