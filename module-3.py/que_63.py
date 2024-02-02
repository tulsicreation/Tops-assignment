# Q-63: Write a Python program to returns sum of all divisors of a number.

# ans:

def sum_div(number):
    divisors = [1]
    for i in range(2, number):
        if (number % i) == 0:
            divisors.append(i)
    return sum(divisors)


print(sum_div(8))
print(sum_div(12))
