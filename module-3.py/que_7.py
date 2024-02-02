# Q-7: Write a Python program to remove duplicates from a list.

# ans:
mylist = ["a", "b", "a", "c", "c", 'apple', 12, 'apple']
mylist = list(dict.fromkeys(mylist))
print(mylist)
