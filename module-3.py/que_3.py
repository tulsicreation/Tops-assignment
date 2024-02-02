
# Q-3: Differentiate between append () and extend () methods? 

# ans: 
# The append() method in the Python programming language adds an item to a list that already exists
# whereas the extend() method adds each of the iterable elements which is supplied 
# as a parameter to the end of the original list.

# Append Items:
# To add an item to the end of the list, use the append() method:
# program:
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)

# Extend List
# To append elements from another list to the current list, use the extend() method.
# program:
thislist = ["apple", "banana", "cherry"]
tropical = ["mango", "pineapple", "papaya"]
thislist.extend(tropical)
print(thislist)