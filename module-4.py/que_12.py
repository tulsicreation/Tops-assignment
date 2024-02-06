# Q-12: Write a Python program to copy the contents of a file to another file.

# ans:
with open("demo.txt", "r") as firstfile, open("demo_2.txt", "w") as secondfile:
    for line in firstfile:
        secondfile.write(line)
