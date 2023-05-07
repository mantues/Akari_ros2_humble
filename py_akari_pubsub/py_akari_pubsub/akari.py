from akari_client import AkariClient

akari = AkariClient()

joints = akari.joints

print(joints.get_joint_positions())

print(joints.get_joint_limits())
joints.enable_all_servo()
joints.move_joint_positions(pan=0.4,tilt=-0.2)
