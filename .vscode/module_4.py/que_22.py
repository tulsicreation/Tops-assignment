# Q-22: How to Define a Class in Python? What Is Self? Give An Example Of A Python Class.

# ans:

# Python Classes/Objects:
# Python is an object oriented programming language.
# Almost everything in Python is an object, with its properties and methods.
# A Class is like an object constructor, or a "blueprint" for creating objects.

# The self Parameter:
# The self parameter is a reference to the current instance of the class,
# and is used to access variables that belongs to the class.
# It does not have to be named self , you can call it whatever you like,
# but it has to be the first parameter of any function in the class:

# example:
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f"{self.name}({self.age})"


p1 = Person("John", 36)

print(p1)
