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
