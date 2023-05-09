#!/usr/bin/env python
# coding:utf-8

import time

from akari_client import AkariClient


def main() -> None:
    """
    メイン関数
    """
    with AkariClient() as akari:
        # m5と通信するクラスを呼び出す
        m5 = akari.m5stack

        print("Start!")
        # 2秒停止
        time.sleep(2)

        # アプリが終了されるまで、データ取得を実行し続ける。
        while True:
            # M5からデータを取得
            data = m5.get()
            
            # ボタンAが押されているとdata['button_a']がTrue。コマンドラインに'Button A pressed!'と表示される。
            if data["button_a"]:
                print("Button A pressed!")
            # ボタンBが押されているとdata['button_b']がTrue。コマンドラインに'Button B pressed!'と表示される。
            if data["button_b"]:
                print("Button B pressed!")
            # ボタンCが押されているとdata['button_c']がTrue。コマンドラインに'Button C pressed!'と表示される。
            if data["button_c"]:
                print("Button C pressed!")
            # din0が押されているとdata['din0']がFalse。コマンドラインに'din0 pressed!'と表示される。
            if data["din0"]==0:
                print("din0 pressed!")
            # din1が押されているとdata['din1']がFalse。コマンドラインに'din0 pressed!'と表示される。
            if data["din1"]==0:
                print("din1 pressed!")
            
            # dataの表示 。int変換して０／１にしている
            print(
                "Button A: "
                + str(int(data["button_a"]))
                + " Button B: "
                + str(int(data["button_b"]))
                + " Button C: "
                + str(int(data["button_c"]))
                + 
                " din0: "
                + str(int(data["din0"]))
                + " din1: "
                + str(int(data["din1"]))
                + " ain0: "
                + str(data["ain0"])
            )
            # 1秒停止
            time.sleep(1)


if __name__ == "__main__":
    main()
