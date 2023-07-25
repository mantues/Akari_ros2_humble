import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray
from std_msgs.msg import Int32

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.publisher_akari = self.create_publisher(Float32MultiArray, 'akari_topic', 10)
        
        # vertical : tilt 
        self.vertical = 0.
        self.vertical_range = 0.57
        # horizontal : pan
        self.horizontal = 0.
        self.horizontal_range = 1.04
        
        # gain
        self.vertical_gain = 0.1
        self.horizontal_gain = 0.1
                
    def timer_callback(self):
        msg_list = Float32MultiArray()
        msg_list.data = [self.horizontal, self.vertical, 1.0]
        
        s = input("enter KEY: vertical:q, w  horizontal:a, s : ")
        self.get_logger().info('Please enter q, w, a, s : ')
        # vertical movement
        if s == 'w':
            self.vertical += self.vertical_gain
            self.vertical = max(-1*self.vertical_range, min(self.vertical_range, self.vertical)) 
            self.publisher_akari.publish(msg_list)
        elif s == 'q':
            self.vertical -= self.vertical_gain
            self.vertical = max(-1*self.vertical_range, min(self.vertical_range, self.vertical)) 
            self.publisher_akari.publish(msg_list)
        # horizontal movement
        elif s == 'a':
            self.horizontal += self.horizontal_gain
            self.horizontal = max(-1*self.horizontal_range, min(self.horizontal_range, self.horizontal)) 
            self.publisher_akari.publish(msg_list)
        elif s == 's':
            self.horizontal -= self.horizontal_gain
            self.horizontal = max(-1*self.horizontal_range, min(self.horizontal_range, self.horizontal)) 
            self.publisher_akari.publish(msg_list)
        # reset servo positions
        elif s == 'r':
            msg_list.data = [0., 0., 1.]
            self.publisher_akari.publish(msg_list)
        # enable all servos
        elif s == 'e':
            msg_list.data = [self.horizontal, self.vertical, 1.]
            self.publisher_akari.publish(msg_list)
            self.get_logger().info('ENABLE all servos')
        # disable all servos
        elif s == 'd':
            msg_list.data = [self.horizontal, self.vertical, 0.]
            self.publisher_akari.publish(msg_list)
            self.get_logger().info('DISABLE all servos')
        else:
            self.get_logger().info('Please enter q, w, a, s : ')
        
        self.get_logger().info('Publishing: "%s"' % msg_list.data)
        


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
