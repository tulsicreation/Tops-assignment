a = int(input("enter the number : "))
b = 1
for i in range(a, 0, -1):
    print(i, end="*")
    b = b*i
print(f"\b={b}")
