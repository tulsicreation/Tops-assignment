# Q-21: What are oops concepts? Is multiple inheritance supported in java.

# ans:

# OOP stands for Object-Oriented Programming.
# Procedural programming is about writing procedures or methods that perform operations on the data,
# while object-oriented programming is about creating objects that contain both data and methods.
# Object-oriented programming has several advantages over procedural programming:
# OOP is faster and easier to execute
# OOP provides a clear structure for the programs
# OOP helps to keep the Java code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
# OOP makes it possible to create full reusable applications with less code and shorter development time..

# In java,
# multiple inheritance is not supported because of ambiguity problem.
# We can take the below example where we have two classes Class1 and Class2 which have same method display().
# If multiple inheritance is possible than Test class can inherit data members (properties) and methods (behaviour) of both Class1 and Class2 classes.
# Now, Test class have two display() methods inherited from Class1 and Class2.
# Problem occurs in method call, when display() method will be called with Test class object which method will be called, will it be of Class1 or Class2.
# This is ambiguity problem because of which multiple inheritance is not supported in java.
