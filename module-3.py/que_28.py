# Q-28: Write a Python program to remove an empty tuple(s) from a list of tuples.

# ans:

def Remove(tuples):
    tuples = [t for t in tuples if t]
    return tuples


tuples = [(), ('ram', '15', '8'), (), ('laxman', 'sita'), (), (),
          ('krishna', 'akbar', '45'), ('', ''), ()]
print(Remove(tuples))  # [('ram', '15', '8'), ('laxman', 'sita'), ('krishna', 'akbar', '45'), ('', '')]