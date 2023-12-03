
"""Negative indexes in Python are used to access elements in a sequence (such as a list, tuple, or string) 
from the end of the sequence, rather than the beginning. In Python, the last element of a sequence has an
index of -1, the second-to-last element has an index of -2, and so on. Negative indexes provide a convenient 
way to access elements from the end of a sequence without needing to know its length."""

l1 = [10, 20, 30, 40, 50]

# Accessing elements using positive indexes
first_element = l1[0]   # Index 0 (first element)
last_element = l1[4]    # Index 4 (last element)

# Accessing elements using negative indexes
second_last_element = l1[-2]  # Index -2 (second-to-last element)
