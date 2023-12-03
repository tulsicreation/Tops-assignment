def analyze_list(numbers):
    if not numbers:
        return None  # Return None for an empty list

    largest = max(numbers)
    smallest = min(numbers)
    total_sum = sum(numbers)

    return largest, smallest, total_sum
