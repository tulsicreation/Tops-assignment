# Q-45: Write a Python program to find the highest 3 values in a dictionary.

# ans:
my_dict = {'A': 67, 'B': 23, 'C': 45,
           'D': 56, 'E': 12, 'F': 69}

print("Dictionary with 3 highest values:")
print("Keys: Values")

x = list(my_dict.values())
d = dict()
x.sort(reverse=True)
x = x[:3]
for i in x:
    for j in my_dict.keys():
        if (my_dict[j] == i):
            print(str(j)+" : "+str(my_dict[j]))
