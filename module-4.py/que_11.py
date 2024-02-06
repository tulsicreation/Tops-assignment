# Q-11: Write a Python program to write a list to a file.

# ans:
color = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
with open('color.txt', "w") as file:
    for c in color:
        file.write("%s\n" % c)

content = open('color.txt')
print(content.read())
