'''22. Write a Python program to find the index of an item in a specified list.'''

nums = [5,15,16,17,19,20]

num_to_find = 17

for i in enumerate(nums):
    if i[1] == num_to_find:
        print("index: ", i[0])