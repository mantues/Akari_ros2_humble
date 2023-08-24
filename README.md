# Akari_for_ros2 humble
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
## akari_launch：サーバーパッケージとakari_state_publisher、akari_setting_publisherを起動するlaunch
```
ros2 launch akari_launch akari_launch.py 
```
### MSG型：sensor_msgs/JointState.msg

http://docs.ros.org/en/api/sensor_msgs/html/msg/JointState.html

### メッセージの受け取り方
```
ros2 launch akari_launch akari_launch.py 
ros2 topic echo /akari_joint_states
```

***

***
## akari_setting_publisher：Akariの設定値をPublishするパッケージ
　
### MSG：Akarisetting.msg

```
std_msgs/Header header
string[] jointname
float32[] jointpositions
float32[] jointvelocities
float32[] jointaccelerations
bool[] servoenabled
bool[] servomovingstate
```

### メッセージの受け取り方

```
ros2 launch akari_launch akari_launch.py 
ros2 topic echo /akarisettingstates
```



***
## akari_state_publisher：Akariの関節の位置をJointState型でPublishするパッケージ

### MSG：sensor_msgs/JointState.msg

http://docs.ros.org/en/api/sensor_msgs/html/msg/JointState.html

### メッセージの受け取り方
```
ros2 launch akari_launch akari_launch.py 
ros2 topic echo /akari_joint_states
```


***
## akari_client_example：Akari設定を変更するClientパッケージ

### display_color：M5Stackの画面の色を変える　client node
### MSG：SetDisplayColor.srv
```
string color
int32[] color_var
---
bool result
```
Clientから画面を変えるRequestを送信。
Requestはカラーリストからランダムで選択します。

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example display_color
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
### display_text：M5Stackにテキストを表示させる　client node
### MSG：SetDisplayText.srv
```
string text
int32 pos_x
int32 pos_y
uint8 size
string text_color
string back_color
bool refresh
---
bool result
```
ClientからRequestを送信。
Requestはリストからランダムで選択します。

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example display_text
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

### display_image：M5Stackの画面にロゴを表示させる　client node
### MSG：SetDisplayImage.srv
```
string filepath
int32 pos_x
int32 pos_y
float32 scale
---
bool result
```
ClientからRequestを送信。

いくつかのロゴ画像をリクエストしてM5Stackの画面に表示させる
ロゴ位置と大きさはランダムで選択

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example display_image
```
```
・ロゴリスト
"/jpg/logo320_ex.jpg", "/jpg/logo320.jpg", "/jpg/waiting.jpg"

・ロゴ位置
Positions.CENTER, Positions.LEFT, Positions.TOP, Positions.RIGHT, Positions.BOTTOM

・倍率
0.5-1.0までのランダム
```

### display_reset：M5Stackをリセットする　client node
### MSG：Trigger.srv
```
string trigger
---
bool result
```
ClientからRequestを送信。

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example display_reset
```

### move_joints_action_client：pan、tiltを動かすAction & Client　client node
### MSG：MoveJoint.action
```
float32 acc_pan
float32 acc_tilt
float32 vel_pan
float32 vel_tilt
float32 goal_pan
float32 goal_tilt
---
bool result
---
float32 pos_pan
float32 pos_tilt
```
ClientからRequestを送信。
目標位置をRequestして目標地点に到達するまでに位置情報をフィードバックもらう

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example move_joints_action_client
```
```
・関節の加速度、速度は0.15で固定（フィードバックがわかりやすいようにゆっくり）
・目標位置
pan：-1.0 - 1.0のランダム
tiltpan：-0.5 - 0.5のランダム

・フィードバック
目的位置に到着するまでにServer側から位置情報のフィードバックを受けて表示している。
```

### set_allout：Akari上面のLED（dout0, dout1, PWM(pwmout0)）を点灯させる　client node
### MSG：SetAllout.srv
```
bool dout0_val
bool dout1_val
uint8 pwmout0_val
---
bool result
```
ClientからRequestを送信。

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example set_allout
```
```
・dout0：True, Falseからランダムで選択
・dout1：True, Falseからランダムで選択
・PWM(pwmout0)：0 - 255のIntからランダムで選択
```
### set_dout：Akari上面のLED（dout0, dout1）を点灯させる　client node
### MSG：SetDout.srv
```
uint8 pin_id
bool val
---
bool result
```
ClientからRequestを送信。

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example set_dout
```
```
・LEDは[0, 1]のリストからランダムで選択
```
### set_pwmout：Akari上面のLED（PWM(pwmout0)）を点灯させる　client node
### MSG：SetPwmout.srv
```
uint8 pin_id
uint8 val
---
bool result
```
ClientからRequestを送信。

```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example set_pwmout
```
```
・0 - 255のIntからランダムで選択
```

### servo_acc_set_client：Akariのサーボ（pan, tilt）の加速度を設定する　client node
### MSG：SetJointFloat.srv
```
string[] joint_name
float32[] val
---
bool result
```
ClientからRequestを送信。


```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example servo_acc_set_client
```
```
・Requestを送るjoint_nameは ['pan', 'tilt']のリスト
・加速度は0.15 - 0.5のfloatからランダム
```

### servo_vel_set_client：Akariのサーボ（pan, tilt）の速度を設定する　client node
### MSG：SetJointFloat.srv
```
string[] joint_name
float32[] val
---
bool result
```
ClientからRequestを送信。


```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example servo_vel_set_client
```
```
・Requestを送るjoint_nameは ['pan', 'tilt']のリスト
・速度は0.15 - 2.5のfloatからランダム
```

### servo_enable_set_client：Akariのサーボ（pan, tilt）の有効無効状態を設定する　client node
### MSG：SetJointBool.srv
```
string[] joint_name
bool[] val
---
bool result
```
ClientからRequestを送信。


```
ros2 launch akari_launch akari_launch.py 
ros2 run akari_client_example servo_enable_set_client
```
```
・Requestを送るjoint_nameは ['pan', 'tilt']のリスト
・有効無効はランダムで選択
```

想定外のリクエストの場合はFalseを返す。

```
ros2 launch akari_launch akari_launch.py 
```

