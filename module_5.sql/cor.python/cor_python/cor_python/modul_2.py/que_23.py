def insert_in_middle(main_string, insert_string):
    middle_index = len(main_string) // 2
    result_string = main_string[:middle_index] + \
        insert_string + main_string[middle_index:]
    return result_string
