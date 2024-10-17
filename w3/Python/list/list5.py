'''
5. Write a Python program to count the number of strings from a given list of strings. The string length is 2 or more and the first and last characters are the same.
Sample List : ['abc', 'xyz', 'aba', '1221']
Expected Result : 2
'''

sample_list = ['abc', 'xyz', 'aba', '1221']

first = sample_list[2]

count = 0
for item in sample_list:
    if item[0] == item[-1]:
        count += 1
        print(item[0], item[-1])
print(count)