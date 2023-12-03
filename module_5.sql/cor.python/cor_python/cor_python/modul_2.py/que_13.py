# Get a string from the user
string = input("Enter a string: ")
 
# Create an empty dictionary to store character frequencies
char_frequency = {}

# Iterate through the string to count character frequencies
for char in string:
    # Check if the character is a letter or not (you can modify this condition as needed)
    if char.isalpha():
        char_frequency[char] = char_frequency.get(char, 0) + 1
# Print the character frequencies
print("Character frequencies in the string:")
for char, count in char_frequency.items():
    print(f"'{char}': {count}")
   