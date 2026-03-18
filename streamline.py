import math

class Calculations:
    def caltitude(angle_of_tracker, distance_from_launch_pad_to_tracker):
        """All the paramaters are pretty self explanatory."""
        h = distance_from_launch_pad_to_tracker/math.cos(angle_of_tracker)
        altitude = math.sqrt((h^2)-(distance_from_launch_pad_to_tracker^2))
        return altitude
    def acceleration(velocityatt1,velocityatt2,):
        """All in meters/second. Interval is 1 second"""
        return (velocityatt1-velocityatt2)