# Q-9: Write a Python program to count the number of lines in a text file.

# ans:
with open("demo.txt", "r") as file1:
    lines = len(file1.readlines())
    print('Total Number of lines:', lines)
