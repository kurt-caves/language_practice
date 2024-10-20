'''
2. Write a Python program to create a person class. Include attributes like name, country and date of birth. Implement a method to determine the person's age.
'''

class person():

    def __init__(self, name, country, dob):
        self.name = name
        self.country = country
        self.dob = dob

    def age(self):
        age = 2024 - self.dob
        return age
bilbo = person('Bilbo', 'Shire', 1990)
age = bilbo.age()
print(age)