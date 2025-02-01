class Employee:

    # this is a class variable
    raise_amount = 1.04
    num_of_emps = 0

    # this is the constructor
    # a constructor is a class method that automatically runs
    # when you create a new object from that class
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + "@email.com"

        Employee.num_of_emps += 1

    # each method within a class automatically takes instance
    # as the first argument, this is called self
    def fullname(self):
        return f"{self.first} {self.last}"
    # all of these methods are regular methods that take in
    # an instance
    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

emp_1 = Employee('test', 'user', 50)
emp_1 = Employee('new', 'person', 60)

print(Employee.num_of_emps)



# Employee.raise_amount = 1.05
# emp_1.raise_amount = 1.06

# print(Employee.raise_amount)
# print(emp_1.raise_amount)

# print(emp_1.__dict__)
# print(Employee.__dict__)

