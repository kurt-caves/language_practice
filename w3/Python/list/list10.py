'''
10. Write a Python program to find the list of words that are longer than n from a given list of words.
'''

sample_list = ['october', 'snake', 'bob', 'bilbo', 'ok']

n = input("how long of a word are you looking for? : ")

for item in sample_list:
    if len(item) > int(n):
        print(item)

# for item in sample_list:
#     if len(item) > n:
#         print(item)