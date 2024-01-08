# Q-17: When is the finally block executed?

# ans:

# when there is no exception,

# when there is an exception,

# only if some condition that has been specified is satisfied


'''try:
    1/0
except ZeroDivisionError:
    raise
finally:
    print("Does this code run?")'''
