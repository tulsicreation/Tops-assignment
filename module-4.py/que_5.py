# Q-5: Write a Python program to read last n lines of a file.

# ans:
file = open("demo.txt", "r")
list1 = file.readlines()
print(list1[-1:-2:-1])  # last line
