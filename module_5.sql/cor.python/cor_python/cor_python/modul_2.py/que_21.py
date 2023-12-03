def reverse_string_if_multiple_of_4(input_str):
    if len(input_str) % 4 == 0:
        return input_str[::-1]
    else:
        return input_str
