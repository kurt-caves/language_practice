'''
1. Write a Python program to create a class representing a Circle. Include methods to calculate its area and perimeter.
'''

class circle:

    def __init__(self, radius):
        self.radius = radius

    def calc_area(self):
        area = (self.radius * self.radius) * 3.14
        return area
        
    def calc_circum(self):
        circum = 2 * self.radius * 3.14
        return circum

circle_1 = circle(5)
print(circle_1.calc_area())
print(circle_1.calc_circum())