'''
14. Write a Python program to print the numbers of a specified list after removing even numbers from it.
'''

sample_list = [1,2,3,4,5,6,7,8,9]
newlist = [x for x in sample_list if x % 2 != 0]
print(newlist)