# Q-10: Write a Python program to count the frequency of words in a file.

# ans:
from collections import Counter


def word_count(fname):
    with open("demo.txt", "r") as file:
        return Counter(file.read().split())


print("Number of words in the file :", word_count("demo.txt"))
