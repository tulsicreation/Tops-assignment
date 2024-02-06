# Q-7: Write a Python program to read a file line by line store it into a variable.

# ans:
def file_read(fname):
    with open("demo.txt", "r") as file:
        data = file.readlines()
        print(data)


file_read("demo.txt")

