
# Q-9: Write a Python program to sum of three given integers.However, if two
# values are equal sum will be zero.

a = int(input("enter the number of a:"))
b = int(input("enter the number of b:"))
c = int(input("enter the number of c:"))

sum = a+b+c

if a == b or b == c or c == a:
    print("sum = 0")
else:
    print("sum =", sum)