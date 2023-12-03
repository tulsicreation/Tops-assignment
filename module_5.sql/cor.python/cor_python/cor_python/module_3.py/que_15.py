def second_smallest(input_list):
    
    if len(input_list) < 2:
        return "List should have at least two elements"

   
    sorted_list = sorted(input_list)

    
    return sorted_list[1]



my_list =[]
result = second_smallest(my_list)

print("Original list:", my_list)
print("Second smallest number:", result)

