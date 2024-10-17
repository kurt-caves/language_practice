'''
7. Write a Python program to remove duplicates from a list.
'''

sample_list = ['a', 'b', 'c', 'a', 'd', 'd']

sample_dict = {}
for item in sample_list:
    sample_dict.update({item: None})
print(sample_dict)

new_list = []
for key, value in sample_dict.items():
    new_list.append(key)
print(new_list)
