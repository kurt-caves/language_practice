'''28. Write a Python program to find the second largest number in a list.'''
import math
nums = [1,2,3,4,5,6,7,8,9]
max1 = float('-inf')
max2 = float('-inf')
for num in nums:
    if num > max1:
        max1 = num
for num in nums:
    if num > max2 and num < max1:
        max2 = num
print(max1)
print(max2)