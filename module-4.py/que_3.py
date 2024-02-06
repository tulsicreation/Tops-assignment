# Q-3: Write a Python program to append text to a file and display the text.

# ans:
file = open("demo.txt", "a")
file.write("Good Luck!")
file.close()

file = open("demo.txt", "r")
print(file.read())
