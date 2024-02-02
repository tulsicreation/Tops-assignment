# Q-55: How can you get a random number in python?

# ans:

import random
print(random.randint(0, 9))

x = random.randrange(1, 50)
print(x)

y = [45, 25, 47, "Hello", "wow", True]
print(random.choice(y))
