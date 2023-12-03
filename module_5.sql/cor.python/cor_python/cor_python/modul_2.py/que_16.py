def count_word_occurrences(sentence):
    word_count = {}

    # Split the sentence into words
    words = sentence.split()

    # Count occurrences of each word
    for word in words:
        # Remove punctuation and convert to lowercase for better matching
        word = word.strip('.,!?').lower()
        word_count[word] = word_count.get(word, 0) + 1

    return word_count
