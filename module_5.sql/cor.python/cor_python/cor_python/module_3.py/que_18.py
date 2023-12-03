def split_list(input_list):
    # Unpack the list into separate variables
    var1, var2, var3, *remaining = input_list

    return var1, var2, var3, remaining


# Example usage:
my_list = [1, 2, 3, 4, 5]
result1, result2, result3, remaining_list = split_list(my_list)

print("Original list:", my_list)
print("Variable 1:", result1)
print("Variable 2:", result2)
print("Variable 3:", result3)
print("Remaining elements:", remaining_list)
