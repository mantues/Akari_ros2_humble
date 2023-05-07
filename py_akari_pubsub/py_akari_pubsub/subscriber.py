import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray
from std_msgs.msg import Int32

from akari_client import AkariClient
import time

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.akari_subscription = self.create_subscription(Float32MultiArray, 'akari_topic', self.listener_callback_akari, 10)
        self.akari_subscription  # prevent unused variable warning
        
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.joints.enable_all_servo()
                
    def listener_callback_akari(self, msg):
        self.get_logger().info('Akari heard: "%s"' % msg.data)
        pan = msg.data[0]
        tilt = msg.data[1]
        if msg.data[2] == 1:
            self.joints.enable_all_servo()
        else:
            self.joints.disable_all_servo()
        
        self.joints.move_joint_positions(sync=True, pan = pan,tilt = tilt)
        #time.sleep(3)

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
