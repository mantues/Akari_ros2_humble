import rclpy
from py_tutorial_interfaces.srv import AddThreeInts
from rclpy.node import Node

# client
class MyClient(Node):
    def __init__(self):
        super().__init__("my_client")

        # create client
        self.cli = self.create_client(AddThreeInts, "add_three_ints")

        # waiting server
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available...")

        # create request
        self.req = AddThreeInts.Request()

    # send request
    def send_request(self):
        self.req.a = 1
        self.req.b = 2
        self.req.c = 3
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)

    # create client
    client = MyClient()

    # send request
    client.send_request()

    # send response
    while rclpy.ok():
        rclpy.spin_once(client)
        if client.future.done():
            try:
                response = client.future.result()
                
                # logger
                client.get_logger().info(
                    "%d + %d + %d = %d"
                    % (client.req.a, client.req.b, client.req.c, response.sum)
                )
            except Exception as e:
                client.get_logger().info("Error: %r" % (e,))
            break

    # ノードを明示的に破棄
    client.destroy_node()

    # ROS通信のシャットダウン
    rclpy.shutdown()

if __name__ == "__main__":
    main()
