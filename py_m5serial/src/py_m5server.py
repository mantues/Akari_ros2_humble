import rclpy
from py_tutorial_interfaces.srv import AddThreeInts
from rclpy.node import Node

from py_m5serial.msg import M5
from py_m5serial.srv import (SetAllout, SetDisplayColor,
                               SetDout, SetPwmout,
                               SetDisplayImage, SetDisplayText)
                               
from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
import random
import time

color_pair = ['BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
                'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
                'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK','RANDOM']

text_pair = ['1.AKARI', '2.あかり', '3.灯り', '4.アカリ', '5.Akari', '6.akari', '7.灯']

# server
class m5server(Node):
    def __init__(self):
        super().__init__("m5_service")

        # create service
        self.srv = self.create_service(SetDisplayColor, 'set_display_color', self.set_display_color)
        self.srv = self.create_service(SetDisplayText, 'set_display_text', self.set_display_text)
        
        self.random_color = Color(
                red=random.randint(0, 255),
                green=random.randint(0, 255),
                blue=random.randint(0, 255),
            )
            
        
        self.akari = AkariClient()
        self.m5 = self.akari.m5stack
        self.data = self.m5.get()

    # callback
    def set_display_color(self, request, response):
        req_color = request.color
        self.get_logger().info('Change color : %s' % (str(req_color)))
        # set_display_color
        if req_color in color_pair:
            if req_color == 'RANDOM':
                self.m5.set_display_color(self.random_color)
                time.sleep(0.5)
                self.m5.set_display_text(text='RANDOM', 
                    pos_x=Positions.CENTER, pos_y=Positions.CENTER, size=5,
                    text_color=Colors.WHITE, back_color=Colors.DARKGREY, refresh=False)            
            else:
                self.m5.set_display_color(Colors[req_color])
                time.sleep(0.5)                
                self.m5.set_display_text(text=req_color, 
                    pos_x=Positions.CENTER, pos_y=Positions.CENTER, size=5,
                    text_color=Colors.WHITE, back_color=Colors.DARKGREY, refresh=False)  
            response.result = True
        else:
            self.m5.reset_m5()
            response.result = False
        return response

    # callback
    def set_display_text(self, request, response):
        self.m5.reset_m5()
        req_text = request.text
        req_pos_x = request.pos_x
        req_pos_y = request.pos_y
        req_size = request.size
        req_text_color = request.text_color
        req_back_color = request.back_color
        req_refresh = request.refresh
        self.get_logger().info('Change text : %s Size: %s' % (str(req_text), str(req_size)))
        # set_display_text
        if req_text_color in color_pair:
            self.m5.set_display_text(
                text=req_text, pos_x=req_pos_x, pos_y=req_pos_y, size=req_size, text_color=Colors[req_text_color], back_color=Colors[req_back_color], refresh=req_refresh
            )
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

