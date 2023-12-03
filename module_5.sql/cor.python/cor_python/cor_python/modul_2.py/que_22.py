def get_first_and_last_chars(input_str):
    if len(input_str) < 2:
        return "Empty String"
    else:
        return input_str[:2] + input_str[-2:]
