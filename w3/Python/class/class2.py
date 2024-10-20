'''
2. Write a Python program to create a class and display the namespace of that class.
'''

class Program:

    def __init__(self):
        self.name = 'Bob'
    def display(self):
        pass
    def update(self):
        pass

if __name__ == '__main__':
    for name in Program.__dict__:
        print(name)