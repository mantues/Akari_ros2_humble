import rclpy
from py_tutorial_interfaces.srv import AddThreeInts
from rclpy.node import Node

# server
class MyServer(Node):
    def __init__(self):
        super().__init__("my_service")

        # create service
        self.srv = self.create_service(
            AddThreeInts, "add_three_ints", self.listener_callback
        )

    # callback
    def listener_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        return response

def main(args=None):
    rclpy.init(args=args)

    # create service
    server = MyServer()

    rclpy.spin(server)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

