'''27. Write a Python program to find the second smallest number in a list.'''

import math
min = float('inf')
min2 = float('inf')
list1 = [1,0,4,6,3,1,7,8,9]

for item in list1:
    if item < min:
        min = item
    if item < min2 and item > min:
        min2 = item

print(min)
print(min2)