# Q-6: Write a Python program to count the number of strings where the string length is
# 2 or more and the first and last character are same from a given list of strings.

# ans:

def match_words(lists):
  ctr = 0

  for word in lists:
    if len(word) > 1 and word[0] == word[-1]:
      ctr += 1
  return ctr

print(match_words(['abc', 'xyz', 'aba', '1221', '19591','k']))