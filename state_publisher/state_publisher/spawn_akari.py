import sys
import rclpy
from gazebo_msgs.srv import SpawnEntity

from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('spawn_entity')
        self.client = self.create_client(SpawnEntity, 'spawn_entity')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SpawnEntity.Request()

    def send_request(self):
        self.req.name = str(sys.argv[1])
        self.req.xml = str(sys.argv[2])
        self.future = self.client.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    minimal_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                minimal_client.get_logger().info(
                    'Test {}'.format(minimal_client.req.xml))
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
