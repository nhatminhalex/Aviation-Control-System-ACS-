import math

angle_of_tracker = 90
distance_from_launch_pad_to_tracker = 20

h = distance_from_launch_pad_to_tracker/math.cos(angle_of_tracker)
altitude = math.sqrt((h^2)-(distance_from_launch_pad_to_tracker^2))