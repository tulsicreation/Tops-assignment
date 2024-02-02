# Q-10: Write a Python program that will return true if the two given integervalues
# are equal or their sum or difference is 5.

num1 = int(input("enter the num1:"))
num2 = int(input("enter the num2:"))
if num1 == num2 or (num1+num2) == 5 or (num1-num2) == 5:
   print("true")
else:
    print("false")
