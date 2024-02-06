# Q-8: Write a python program to find the longest words.

# ans:
def longest_word(filename):
    with open("demo.txt", "r") as file:
        words = file.read().split()
    max_len = len(max(words, key=len))
    return [word for word in words if len(word) == max_len]


print(longest_word("demo.txt"))
