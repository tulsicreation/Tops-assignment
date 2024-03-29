# Q-56: How will you set the starting value in generating random numbers?

# ans:

import random
random.seed(10)
print(random.random())

# The seed() method is used to initialize the random number generator.
# The random number generator needs a number to start with (a seed value),
# to be able to generate a random number.
# By default the random number generator uses the current system time.
