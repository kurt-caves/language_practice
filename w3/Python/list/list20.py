'''20. Write a Python program to access the index of a list.'''

nums = [5,12,17,20]

access_index = 2

for i in range(len(nums)):
    if i == access_index:
        print(nums[i])