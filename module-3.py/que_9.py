# Q-9: Write a Python function that takes two lists and returns true if they have
# at least one common member.

# ans:
def common_member(a, b):
    return any(i in b for i in a)


a = [1, 2, 3, 4, 5]
b = [5, 6, 7, 8, 9]
print(common_member(a, b))  # True

a = [1, 2, 3, 4, 5]
b = [6, 7, 8, 9]
print(common_member(a, b))  # False
