# Q-6: Write a Python program to read a file line by line and store it into a list.

# ans:
def file_read(fname):
    with open("demo.txt", "r") as file:
        list = file.readlines()
        print(list)


file_read('demo.txt')
