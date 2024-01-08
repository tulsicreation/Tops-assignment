# Q-20: Write python program that user to enter only odd numbers, else will raise an exception.

# ans:

try:
    num = int(input("Enter a number: "))
    assert num % 2 == 1
except:
    print("Not an odd number!")
else:
    reciprocal = 1/num
    print(reciprocal)
