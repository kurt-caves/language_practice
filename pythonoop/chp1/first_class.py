import math

class Point:
    'Represents a point in two dimensional coordinates'
    def __init__(self, x=0, y=0):
        '''
        Initialize the position of a new point. The x and y coordinates can be specified. If they are not, the point defaults to the origin
        '''
        self.move(x, y)

    def move(self, x, y):
        self.x = x
        self.y = y

    def reset(self):
        self.move(0,0)

point = Point(3,5)
print(point.x, point.y)