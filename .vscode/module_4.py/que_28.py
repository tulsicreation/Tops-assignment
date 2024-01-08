# Q-28: What is used to check whether an object o is an instance of class A?

# ans:
class A:
    name = "John"


o = A()

x = isinstance(o, A)

print(x)
