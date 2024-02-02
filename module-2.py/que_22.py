
# Q-3: Write a Python program to get the Fibonacci series of given range.

n = int(input("enter the number of n:"))
a = 0
b = 1
c = b
count = 1

while count <= n:
    print(c, end=" ")
    count += 1
    a = b
    b = c
    c = a + b
