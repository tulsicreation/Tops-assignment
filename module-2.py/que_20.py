
# Q-20 : Write a Python function that takes a list of words and returns the length of the longest one.


def main():
    text = input("Enter text: ")

    longest = 0

    for words in text.split():
        if len(words) > longest:
            longest = len(words)
            longest_word = words

    print("The longest word is", longest_word,
          "with length", len(longest_word))


main()
