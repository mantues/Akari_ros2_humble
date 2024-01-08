#!/usr/bin/env python
# coding:utf-8

import time

import rclpy
from akari_client import AkariClient
from akari_client.color import Color, Colors
from akari_client.position import Positions
from akari_msgs.srv import (
    SetAllout,
    SetDisplayColor,
    SetDisplayColorRgb,
    SetDisplayImage,
    SetDisplayText,
    SetDout,
    SetPwmout,
    Trigger,
)
from rclpy.node import Node

import cv2
from sensor_msgs.msg import Image as sensorImage
from cv_bridge import CvBridge, CvBridgeError
import os
from ament_index_python.packages import get_package_share_directory
from PIL import ImageFont, ImageDraw, Image
import numpy as np

color_pair = [
    "BLACK",
    "NAVY",
    "DARKGREEN",
    "DARKCYAN",
    "MAROON",
    "PURPLE",
    "OLIVE",
    "LIGHTGREY",
    "DARKGREY",
    "BLUE",
    "GREEN",
    "CYAN",
    "RED",
    "MAGENTA",
    "YELLOW",
    "WHITE",
    "ORANGE",
    "GREENYELLOW",
    "PINK",
]


# server
class M5Server(Node):
    def __init__(self):
        super().__init__("m5_server_node")
        # create service display color from name
        self._set_display_color_srv = self.create_service(
            SetDisplayColor, "set_display_color", self.set_display_color
        )
        # create service display color from rgb
        self._set_display_color_rgb_srv = self.create_service(
            SetDisplayColorRgb, "set_display_color_rgb", self.set_display_color_rgb
        )
        # create service display text
        self._set_display_text_srv = self.create_service(
            SetDisplayText, "set_display_text", self.set_display_text
        )
        # create service display image
        self._set_display_image_srv = self.create_service(
            SetDisplayImage, "set_display_image", self.set_display_image
        )
        # create service reset m5stack
        self._reset_m5_srv = self.create_service(Trigger, "reset_m5", self.reset_m5)
        # create service dout
        self._set_dout_srv = self.create_service(SetDout, "set_dout", self.set_dout)
        # create service pwmout
        self._set_pwmout_srv = self.create_service(
            SetPwmout, "set_pwmout", self.set_pwmout
        )
        # create service allout
        self._set_allout_srv = self.create_service(
            SetAllout, "set_allout", self.set_allout
        )
        # create service reset allout
        self._reset_allout_srv = self.create_service(
            Trigger, "reset_allout", self.reset_allout
        )
        
        self.akari = AkariClient()
        self.joints = self.akari.joints
        self.m5 = self.akari.m5stack
        
        self.bridge = CvBridge()
        self.package_dir = get_package_share_directory("state_publisher")
        self.akari_image = cv2.imread(self.package_dir+'/image/akari.png')
        self.ipa_font = self.package_dir+'/font/ipaexg.ttf'
        # create publisher
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.akari_callback)
        self.m5_image = self.create_publisher(sensorImage, "/m5_image", 10)
        
    # SERVER CALL BACK
    def akari_callback(self) -> None:
        cv_msg = self.bridge.cv2_to_imgmsg(self.akari_image, "bgr8")
        #self.get_logger().info(f"Shape: {self.akari_image.shape}") #(200, 200, 3)
        self.m5_image.publish(cv_msg)
        
    def set_display_color(self, request, response):
        req_color = request.color.upper()
        self.get_logger().info(f"req_color: {req_color}")
        response.result = True
        if req_color in color_pair:
            try:
                #self.m5.set_display_color(Colors[req_color])
                color = (255, 255 ,255)
                self.akari_image = cv2.rectangle(self.akari_image, (0,0), (199, 199), color, thickness=-1)
            except BaseException as e:
                self.get_logger().error(e)
                response.result = False
        else:
            self.get_logger().warn(f"Color {req_color} can't display")
            response.result = False
        return response

    def set_display_color_rgb(self, request, response):
        r_color = request.r
        g_color = request.g
        b_color = request.b
        color = (r_color, g_color ,b_color)
        response.result = True
        try:
            self.akari_image = cv2.rectangle(self.akari_image, (0,0), (199, 199), color, thickness=-1)
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    def set_display_text(self, request, response):
        req_text = request.text
        req_pos_x = request.pos_x
        req_pos_y = request.pos_y
        req_size = request.size
        req_text_color = request.text_color
        req_back_color = request.back_color
        req_refresh = request.refresh
        response.result = True
        try:
            #self.get_logger().info(f"image shape: {self.akari_image.shape}")
            PIL_image = Image.fromarray(self.akari_image)
            draw_image = ImageDraw.Draw(PIL_image)
            draw_image.rectangle(
                  [(10, 110), (150, 175)], fill=(255, 255, 255), outline=(255, 255, 255), width=1
                  )
            font = ImageFont.truetype(self.ipa_font, 20)
            draw_image.text((10, 110), req_text, font=font, fill=(255, 0, 0, 255))
            cvt_image = np.array(PIL_image)
            #cvt_image = cv2.cvtColor(cvt_image, cv2.COLOR_BGR2RGB)
            #self.akari_image = cv2.cvtColor(cvt_image, cv2.COLOR_RGBA2BGRA)
            self.akari_image = cvt_image
            time.sleep(2)
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    def set_display_image(self, request, response):
        filepath = request.filepath
        pos_x = request.pos_x
        pos_y = request.pos_y
        scale = request.scale
        response.result = True
        try:
            self.m5.set_display_image(filepath, pos_x, pos_y, scale)
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    def reset_m5(self, request, response):
        response.result = True
        try:
            self.get_logger().info(f"RESET IMAGE")
            self.akari_image = cv2.rectangle(self.akari_image,
                (10, 100),
                (175, 120),
                color=(255, 255, 255),
                thickness=-1,
                lineType=cv2.LINE_4)
            self.akari_image = cv2.putText(self.akari_image,
                text='RESET IMAGE',
                org=(10, 120),
                fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                fontScale=0.8,
                color=(255, 255, 0),
                thickness=2,
                lineType=cv2.LINE_4)
            cv_msg = self.bridge.cv2_to_imgmsg(self.akari_image, "bgr8")
            self.m5_image.publish(cv_msg)
            time.sleep(4)
            self.akari_image = cv2.imread(self.package_dir+'/image/akari.png')
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response

    def set_dout(self, request, response):
        req_id = request.pin_id
        req_val = request.val
        response.result = True
        if 0 <= req_id <= 1:
            try:
                self.m5.set_dout(req_id, req_val)
            except BaseException as e:
                self.get_logger().error(e)
                response.result = False
        else:
            self.get_logger().warn(
                "PIN_ID is NOT Corect (0-2 is OK): %s" % (str(req_id))
            )
            response.result = False
        return response

    def set_pwmout(self, request, response):
        req_id = request.pin_id
        req_val = request.val
        response.result = True
        if req_id == 0 and 0 <= req_val < 256:
            try:
                self.m5.set_pwmout(req_id, req_val)
            except BaseException as e:
                self.get_logger().error(e)
                response.result = False
        else:
            self.get_logger().warn(
                "PIN_ID: %s or Value: %s is NOT Corect (ID:0-2, Value:0-255)"
                % (str(req_id), str(req_val))
            )
            response.result = False
        return response

    def set_allout(self, request, response):
        req_dout0 = request.dout0_val
        req_dout1 = request.dout1_val
        req_pwmout0_val = request.pwmout0_val
        response.result = True
        if 0 <= req_pwmout0_val < 256:
            try:
                self.m5.set_allout(
                    dout0=req_dout0, dout1=req_dout1, pwmout0=req_pwmout0_val
                )
            except BaseException as e:
                self.get_logger().error(e)
                response.result = False
        else:
            self.get_logger().warn(
                "PWM Value: %s is NOT Corect (0-255)" % (str(req_pwmout0_val))
            )
            response.result = False
        return response

    def reset_allout(self, request, response):
        response.result = True
        try:
            self.m5.reset_allout()
        except BaseException as e:
            self.get_logger().error(e)
            response.result = False
        return response


def main(args=None):
    rclpy.init(args=args)
    server = M5Server()
    rclpy.spin(server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
