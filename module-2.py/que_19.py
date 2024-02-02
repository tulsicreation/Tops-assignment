
# Q-19 : Write a Python program to find the first appearance of the substring 'not'
# and 'poor' froma given string, if 'not' follows the 'poor', replace the whole
# 'not'...'poor'substring with 'good'. Return the resulting string.

def not_poor_to_good(s):

  i_not = s.find('not')
  i_poor = s.find('poor')

  if i_not < i_poor and i_not != -1 and i_poor != -1:
    s = s.replace(s[i_not:i_poor+4], 'good')

  return s


print(not_poor_to_good('The lyrics is not that poor!'))
print(not_poor_to_good('The movie is not so bad'))
print(not_poor_to_good('This book is poor in quality'))
