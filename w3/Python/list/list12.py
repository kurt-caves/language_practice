'''
Write a Python program to print a specified list after removing the 0th, 4th and 5th elements.
Sample List : ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
Expected Output : ['Green', 'White', 'Black']
'''

sample_list = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']

newlist = [x for (i,x) in enumerate(sample_list) if i not in (0,4,5)]
print(newlist)

x = ('apple', 'pear', 'garlic')
y = enumerate(x)
print(y)

for i, x in enumerate(x):
    print(i, x)