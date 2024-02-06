# Q-26: Explain Inheritance in Python with an example? What is init? Or What
# Is A Constructor In Python?

# ans:

# Inheritance in Python:
# Inheritance allows us to define a class that inherits all the methods and properties from another class.
# Parent class is the class being inherited from, also called base class.
# Child class is the class that inherits from another class, also called derived class.

# example:
class Person:
    def __init__(self, fname, lname):
        self.first = fname
        self.last = lname

    def printname(self):
        print(self.first, self.last)


class Student(Person):
    pass


x = Student("Mike", "Olsen")
x.printname()

# In Python, every class inherits from a built-in basic class called ‘object’.
# The constructor i.e. the ‘__init__’ function of a class is invoked when we create an object variable or an instance of the class.
# The variables defined within __init__ () are called instance variables or objects.

# Constructors in Python:
# Python facilitates a special type of method, also called as Python Constructors, to initialize the instance members of the class and to verify enough object resources for executing any startup task.

# Types of Constructors:
# Parameterized Constructor
# Non- Parameterized Constructor
