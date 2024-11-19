# __init__
# class Person:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age

# person = Person('kurt', 36)
# print(person.age, person.name)

# __call__
class Adder:
    def __init__(self, n):
        self.n = n
    def __call__(self, x):
        return self.n + x
# this is an instance
# add_five = Adder(5)
# # __call__ allows an instance of a class to be called as a function
# print(add_five(10))

# __string__(self)
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def __str__(self):
        return f"{self.name}, {self.age} years old"

# defines the informal printable string representation of an object   
p = Person("kurt", 36)
print(p)

