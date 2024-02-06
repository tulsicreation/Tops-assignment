# Q-19: How Do You Handle Exceptions With Try/Except/Finally In Python?
# Explain with coding snippets.

# ans:

a = 10
b = 0

try:
    c = a / b
    print(c)
except ZeroDivisionError as error:
    print(error)
finally:
    print('Finishing up.')
