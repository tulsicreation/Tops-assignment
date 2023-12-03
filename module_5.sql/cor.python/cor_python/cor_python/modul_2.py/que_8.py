a=int(input("enter a number : "))
if a>=0 and a<11:
    print("number is between 0 to 10")
elif a>=11 and a<=20:
    print("number is between 11 to 20")
elif a>=21 and a<=30:
    print("number is between 21 to 30")
elif a>=31 and a<=100:
    print("number is between 31 to 100")



    "<stdin>"
letter = input("Enter a letter: ").lower()  # Convert the input to lowercase

# Check if the input is a single letter
if len(letter) == 1 and letter.isalpha():
    if letter in 'aeiou':
        print(f"{letter} is a vowel.")
    else:
        print(f"{letter} is not a vowel.")
else:
    print("Please enter a single letter.")
