# Q-15: When will the else part of try-except-else be executed?

# ans:
# The code enters the else block only if the try clause does not raise an exception.
# Else block will execute only when no exception occurs.
# Example:
def divide(x, y):
    try:
        result = x // y
    except ZeroDivisionError:
        print("Sorry ! You are dividing by zero ")
    else:
        print("Yeah ! Your answer is :", result)


divide(3, 2)
divide(3, 0)
