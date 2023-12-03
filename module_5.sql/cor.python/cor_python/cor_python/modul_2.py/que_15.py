
def count_substring_occurrences(main_string, substring):
    count = 0
    start_index = 0

    while start_index < len(main_string):
        index = main_string.find(substring, start_index)
        if index == -1:
            break
        count += 1
        start_index = index + 1

    return count
