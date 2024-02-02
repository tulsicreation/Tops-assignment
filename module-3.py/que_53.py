# Q-53: How can you pick a random item from a list or tuple?

# ans:

# list:
import random
itr = [45, 25, 47, "Hello", "wow", True]
print(random.choice(itr))

# tuple:
itr = (45, 25, 47, "Hello", "wow", True)
print(random.choice(itr))
