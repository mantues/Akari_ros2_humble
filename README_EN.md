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
(ros2 run py_m5serial M5publisher does NOT work)
```
python3 py_m5serial/src/button_gpio_publisher.py
```
### To check ros2 message
```
ros2 topic echo /M5stack
```

***
## A simple service and client M5stack screen
### client node
Send request to change color of M5stack screen

```
python3 py_m5serial/src/py_m5client.py 
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




### server node
```
python3 py_m5serial/src/py_m5server.py 
```
Changes the color of M5stack screen according to the py_m5client's request.
If the request is for a color that includes random, True is sent as the result.
If the request is for a reset, send False.

