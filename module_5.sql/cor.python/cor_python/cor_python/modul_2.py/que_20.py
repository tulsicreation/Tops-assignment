def find_longest_word(word_list):
    if not word_list:
        return 0  # Return 0 for an empty list

    longest_length = len(word_list[0])

    for word in word_list[1:]:
        current_length = len(word)
        if current_length > longest_length:
            longest_length = current_length

    return longest_length
