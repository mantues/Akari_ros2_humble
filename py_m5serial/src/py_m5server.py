import rclpy
from py_tutorial_interfaces.srv import AddThreeInts
from rclpy.node import Node

from py_m5serial.msg import M5
from py_m5serial.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout, SetDisplayColor,
                               SetDisplayImage, SetDisplayText)
                               
from akari_client import AkariClient
from akari_client.color import Color, Colors
import random

color_pair = ['BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
                'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
                'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK','RANDOM']

# server
class m5server(Node):
    def __init__(self):
        super().__init__("m5_service")

        # create service
        self.srv = self.create_service(SetDisplayColor, 'set_display_color', self.listener_callback)
        
        self.random_color = Color(
                red=random.randint(0, 255),
                green=random.randint(0, 255),
                blue=random.randint(0, 255),
            )
            
        
        self.akari = AkariClient()
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    # callback
    def listener_callback(self, request, response):
        req = request.color
        self.get_logger().info('Change color : %s' % (str(req)))
        # set_display_color
        if req in color_pair:
            if req == 'RANDOM':
                self.m5.set_display_color(self.random_color)
            else:
                self.m5.set_display_color(Colors[req])
            response.result = True
        else:
            self.m5.reset_m5()
            response.result = False
        return response

def main(args=None):
    rclpy.init(args=args)

    # create service
    server = m5server()

    rclpy.spin(server)

    rclpy.shutdown()

if __name__ == "__main__":
    main()

