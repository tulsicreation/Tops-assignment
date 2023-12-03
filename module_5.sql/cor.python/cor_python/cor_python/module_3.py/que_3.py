#The append() method is used to add a single element to the end of a list.!-->
my_list = [1, 2, 3]
my_list.append(4)
print(my_list)

# The extend() method is used to append the elements of an iterable (e.g., another list) to the end of the current list.
my_list = [1, 2, 3]
other_list = [4, 5, 6]
my_list.extend(other_list)
print(my_list)
