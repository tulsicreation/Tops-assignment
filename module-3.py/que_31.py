# Q-31: How will you create a dictionary using tuples in python? 

# ans:

a=(1,2,3,4,5)
b=('a','b','c',"hello","world")
if len(a) == len(b):
    res = dict(zip(a, b))
print(res)