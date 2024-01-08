# Q-16: Can one block of except statements handle multiple exception?

# ans:

# try:
# some code here
# except (Exception1, Exception2, Exception3) as e:
# handle the exception
# print(e)  # print the exception object

try:
    first = float(input("your first number: "))
    second = float(input("your second number: "))
    print(f"{first} divided by {second} is {first / second}")
except ValueError:
    print("You must enter a number")
except ZeroDivisionError:
    print("You can't divide by zero")
