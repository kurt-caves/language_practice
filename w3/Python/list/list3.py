# Write a Python program to get the largest number from a list.

num_list = [1,2,3,4,5]
infin = float('-inf')
for num in num_list:
    if num > infin:
        greatest = num
print(greatest)
