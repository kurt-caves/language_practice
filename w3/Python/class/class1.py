'''
1. Write a Python program to import a built-in array module and display the namespace of the said module.
'''

import array
import mysql.connector

for name in array.__dict__:
    print(name)

for name in mysql.connector.__dict__:
    print(name)