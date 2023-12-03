def remove_duplicates (input_list):
    unique_list = []

    for item in input_list:
        if item not in unique_list:
            unique_list.append(item)

    return unique_list


# Example usage:
original_list = [1, 2, 2, 3, 4, 4, 5, 6, 6]
result_list = remove_duplicates(original_list)

print(f"Original list: {original_list}")
print(f"List with duplicates removed: {result_list}")
