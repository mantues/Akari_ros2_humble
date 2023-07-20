# Akari_ros2 humble
Akari ROS 2 Humble version (誠意製作中)

https://github.com/AkariGroup/akari_software

***
## How to install ros2 Humble
ROS 2 Humbleのインストールをする。（初めての人はDebian推奨）

基本的にはこれに従う。

https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html


### aptリポジトリの追加
```
sudo apt install software-properties-common
sudo add-apt-repository universe
```

### 情報の更新とROS 2のGPGキーを取得
```
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```

### リポジトリをsource listに追加
```
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

### ROS2 インストール
```
sudo apt update
sudo apt upgrade
sudo apt install ros-humble-desktop
```


***
## py_subpub
ROS 2の publisher と subscriber (Python)
サンプルそのまま

https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html

### Publisher
```
ros2 run py_pubsub talker
```
### Subscriber
```
ros2 run py_pubsub listener
```

***
## py_akari_pubsub：キーボードを使ったAkariを動かすパッケージ
　Publisher：floatのリストをPublishします。
 
　Subscriber：floatのリストをSubscribeしてAkariを動かします。

### Publisher

```
ros2 run py_akari_pubsub akari_talker
```

```
*** キーボードコマンド ***
  首を垂直に動かす {q, w}
  首を水平に動かす {a, s}
  首を初期位置に動かす {r}
  サーボON  {e}
  サーボOFF {d}
```


### Subscriber
```
ros2 run py_akari_pubsub akari_listener
```

***
## py_srvcli
ROS 2の service and client (Python)
サンプルそのまま

https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html

### service node 
```
ros2 run py_srvcli service
```
### client node
```
ros2 run py_srvcli client 2 3
```

***
## py_hello & py_tutorial_interfaces
ROS 2の custom msg and srv files
サンプルそのまま

### server node 
```
ros2 run py_hello server
```
### server node 
```
ros2 run py_hello client
```

***
## py_m5serial
M5 Stackのボタンを読み取る sample & simple publisher

### M5 Stackのボタンを読み取るコマンド
```
python3 py_m5serial/src/button_gpio.py 
```
### M5 Stackのボタンを読み取ってPublishするコマンド（トピック：　M5stack）
　ros2 run py_m5serial M5publisher　は動きません。（調査中）
```
python3 py_m5serial/src/m5stack_publisher.py
```
### Tros2 messageの受け取り方
```
ros2 topic echo /M5stack
```

***
## M5 Stackをつかった service and client
　ros2 run py_m5serial client_color, ros2 run py_m5serial service　は動きません。（なんでや）
### M5Stackの画面の色を変える　client node
Clientから画面を変えるRequestを送信。
Requestはカラーリストからランダムで選択します。

```
python3 py_m5serial/src/py_m5client_color.py 
```

```
・カラーリスト
 'BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
 'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
 'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK','RESET', 'RANDOM', 'SELECT'
 
<色以外の動作>
RESET: M5stackの画面をリセット
RANDOM: RGB成分をランダムで送信 red(0-255), green(0-255), blue(0-255)
SELECT: RGB成分をInt32MultiArrayで送信して表示させる（デフォルトはランダムでRGB値を設定）
```
### M5Stackにテキストを表示させる　client node
ClientからRequestを送信。
Requestはリストからランダムで選択します。

```
python3 py_m5serial/src/py_m5client_text.py 
```
```
・テキストリスト
'1.AKARI', '2.あかり', '3.灯り', '4.アカリ', '5.Akari', '6.akari', '7.灯'

・テキストサイズ
'3', '4', '5'

・カラーリスト
 'BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
 'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
 'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK'
```

### M5Stackをリセットする　client node
ClientからRequestを送信。

```
python3 py_m5serial/src/py_m5client_reset.py 
```


### server node
Clientから送られたRequestに応じて画面を変更。

リクエストに応じた場合はTrueを返す。

想定外のリクエストの場合はFalseを返す。

```
python3 py_m5serial/src/py_m5server.py 
```

