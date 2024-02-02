
# Q-6: Write python program that swap two number with temp variable and

# with temp variable:

a = int(input("enter the number of a:"))
b = int(input("enter the number of b:"))
temp = a
a = b
b = temp
print("after swapping:", a)
print("after swapping:", b)

# without temp variable:

x = int(input("enter the number of x:"))
y = int(input("enter the number of y:"))
x = x+y
y = x-y
x = x-y
print("after swapping:", x)
print("after swapping:", y)