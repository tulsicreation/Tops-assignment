# Q-8: Write a Python program to check a list is empty or not.

# ans:
def Enquiry(lis1):
    if len(lis1) == 0:
        return 0
    else:
        return 1


# lis1 = [23,5,6]
lis1 = []
if Enquiry(lis1):
    print("The list is not empty")
else:
    print("Empty List")
