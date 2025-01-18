# from youtubes https://www.youtube.com/watch?v=ZDa-Z5JzLYM

class Employee:
    # this is the constructor
    # a constructor is a class method that automatically runs
    # when you create a new object from that class
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + "@email.com"
    # each method within a class automatically takes instance
    # as the first argument, this is called self
    def fullname(self):
        return f"{self.first} {self.last}"


# instances of the Employee class
emp_1 = Employee('test', 'user', 1)
emp_2 = Employee('john', 'hancock', 2)
# print(f"emp 1 first name: {emp_1.first}, emp1 email: {emp_1.email}")

# these two lines do the exact same thing
emp_1.fullname() # instance of Employee class
Employee.fullname(emp_1) # call method on class do have to pass instance

# we need the '()' becuase fullname is a method of Employee class and
# not an attribute
# print(emp_1.fullname())






# emp_1.first = 'Corey'
# emp_1.last = 'John'
# emp_1.email = 'john@email.com'
# emp_1.pay = 1
# emp_2.first = 'test'
# emp_2.last = 'user'
# emp_2.email = 'user@email.com'
# emp_2.pay = 2
# print(emp_1.email)
