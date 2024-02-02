# Q-4: Write a Python function to get the largest number, smallest num and sum of all from a list.

# ans:

num = int(input('How many numbers: '))
list = []
for n in range(num):
    numbers = int(input('Enter number '))
    list.append(numbers)
print("Maximum element in the list is :", max(list),
      "\nMinimum element in the list is :", min(list))
