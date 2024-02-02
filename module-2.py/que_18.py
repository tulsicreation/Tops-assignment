
# Q-18 : Write a Python program to add 'ing' at the end of a given string (length should be at least 3).
# If the given string already ends with 'ing' then add 'ly'
# insteadif the string length of the given string is less than 3, leave it unchanged.

string = input("enter your string:")
if len(string) < 3:
  print(string)
elif string[-3:] == 'ing':
  print(string + 'ly')
else:
  print(string + 'ing')
