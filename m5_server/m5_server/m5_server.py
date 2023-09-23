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

    def set_display_color(self, request, response):
        req_color = request.color.upper()
        response.result = True
        if req_color in color_pair:
            try:
                self.m5.set_display_color(Colors[req_color])
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
        color = Color(red=r_color, green=g_color, blue=b_color)
        response.result = True
        try:
            self.m5.set_display_color(color)
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
            self.m5.set_display_text(
                text=req_text,
                pos_x=req_pos_x,
                pos_y=req_pos_y,
                size=req_size,
                text_color=Colors[req_text_color],
                back_color=Colors[req_back_color],
                refresh=req_refresh,
            )
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
            self.m5.reset_m5()
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
