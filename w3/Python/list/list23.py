
'''23. Write a Python program to flatten a shallow list.'''

original_list = [[2, 4, 3], [1, 5, 6], [9], [7, 9, 0]]
new_list = []
for list in original_list:
    for item in list:
        new_list.append(item)
print(new_list)
