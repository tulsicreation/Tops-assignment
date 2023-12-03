
n = int(input("Enter a positive integer (n): "))


sum_of_integers = 0


if n <= 0:
    print("Please enter a positive integer.")
else:
    
    for i in range(1, n + 1):
        sum_of_integers += i

    print(f"The sum of the first {n} positive integers is: {sum_of_integers}")