# Q-15: Write a Python program to get unique values from a list.

# ans:
mylist = ['nowplaying', 'PBS', 'PBS',
          'nowplaying', 'job', 'debate', 'thenandnow']
myset = set(mylist)
print(myset)  # get the unique value from list bcz using the set() method.