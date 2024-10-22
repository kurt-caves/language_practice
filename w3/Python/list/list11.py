'''
11. Write a Python function that takes two lists and returns True if they have at least one common member.
'''

sample_list = ['october', 'snake', 'bob', 'bilbo', 'ok']
sample_list2 = ['october', 'snake', 'bob', 'bilbo', 'sql']

for item in sample_list:
    for item2 in sample_list2:
        if item == item2:
            print(item)