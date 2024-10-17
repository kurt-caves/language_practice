'''
Write a Python program to count the number of characters (character frequency) in a string.
Sample String : google.com'
Expected Result : {'g': 2, 'o': 3, 'l': 1, 'e': 1, '.': 1, 'c': 1, 'm': 1}
'''

my_string = 'google.com'
string_list = []
for char in my_string:
    string_list.append(char)
print(string_list)

string_dict = {}
for item in string_list:
    string_dict[item] = None
for key, value in string_dict.items():
    print(key, value)