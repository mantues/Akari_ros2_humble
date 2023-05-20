# Akari_for_ros
Akari ROS 2 Humble version (still in progress)

https://github.com/AkariGroup/akari_software

***
## py_subpub
A simple publisher and subscriber (Python)

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
## py_akari_pubsub
Operate Akari using the keyboard.

### Publisher

```
ros2 run py_akari_pubsub akari_talker
```

```
*** Keyboard operation manual ***
  vertical movement {q, w}
  horizontal movement {a, s}
  reset servo positions {r}
  enable all servos {e}
  disable all servos {d}
```


### Subscriber
```
ros2 run py_akari_pubsub akari_listener
```

***
## py_srvcli
A simple service and client (Python)

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
custom msg and srv files
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
Read GPIO sample & simple publisher
### check GPIO
```
python3 py_m5serial/src/button_gpio.py 
```
### Publish GPIO message. Topic /M5stack

```
python3 py_m5serial/src/m5stack_publisher.py
```
### To check ros2 message
```
ros2 topic echo /M5stack
```

***
## A simple service and client M5stack screen
### client node(color request)
Send request to change color of M5stack screen

```
python3 py_m5serial/src/py_m5client_color.py 
```
Send a request by selecting at random from Color list.
Then how results from the server.
```
・Color list
 'BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
 'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
 'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK','RESET', 'RANDOM'
 
<FYI>
RESET: Reset M5stack screen
RANDOM: Random color red(0-255), green(0-255), blue(0-255)
```
### client node(text request)
Send request to show text on M5stack screen

```
python3 py_m5serial/src/py_m5client_text.py 
```
Send a request by selecting at random from list.

```
・text list
'1.AKARI', '2.あかり', '3.灯り', '4.アカリ', '5.Akari', '6.akari', '7.灯'

・text size
'3', '4', '5'

・Color list(text, background)
 'BLACK','NAVY','DARKGREEN','DARKCYAN','MAROON','PURPLE','OLIVE',
 'LIGHTGREY','DARKGREY','BLUE','GREEN','CYAN','RED','MAGENTA',
 'YELLOW','WHITE','ORANGE','GREENYELLOW','PINK','RESET', 'RANDOM'


```



### server node
```
python3 py_m5serial/src/py_m5server.py 
```
Changes a screen of M5stack according to the py_m5client's request.
If screen is changed, True is sent as the result.
