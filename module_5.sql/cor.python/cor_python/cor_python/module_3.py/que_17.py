def contains_sublist(main_list, sublist):
    
    for i in range(len(main_list) - len(sublist) + 1):
        
        if main_list[i:i + len(sublist)] == sublist:
            return True
    return False

main_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]
sub_list = [3, 4, 5]

if contains_sublist(main_list, sub_list):
    print("Main list contains the sublist.")
else:
    print("Main list does not contain the sublist.")
