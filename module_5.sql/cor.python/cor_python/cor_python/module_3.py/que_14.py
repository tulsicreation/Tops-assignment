def second_smallest(input_list):
    # Ensure the list has at least two elements
    if len(input_list) < 2:
        return "List should have at least two elements"

    # Find the smallest and second smallest numbers
    smallest = second = float('inf')

    for num in input_list:
        if num < smallest:
            second = smallest
            smallest = num
        elif num < second and num != smallest:
            second = num

    return second


# Example usage:
my_list = [12, 4, 1, 7, 9, 15, 6, 3]
result = second_smallest(my_list)

print("Original list:", my_list)
print("Second smallest number:", result)
