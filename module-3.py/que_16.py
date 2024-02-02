# Q-16: Write a Python program to check whether a list contains a sub list.

# ans:

l1 = [5, 6, 3, 8, 2, 1, 7, 1]
print("The original list : " + str(l1))
sublist = [8, 2, 7]
if set(sublist).intersection(set(l1)) == set(sublist):
    res = True
else:
    res = False
print("Is sublist present in list ? : " + str(res))
