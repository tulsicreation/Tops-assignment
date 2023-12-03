# Swap two numbers using a temporary variable
x = 5
y = 10


temp = x
x = y
y = temp

print("After swapping :")
print("x =", x)
print("y =", y)
#


# Swapping without a temp variable
a = 5
b = 10

a, b = b, a

print("After swapping :")
print("a =", a)
print("b =", b)
