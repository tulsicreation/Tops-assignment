# Q-38: Write a Python program to check multiple keys exists in a dictionary.

# ans:
student = {
    'name': 'Alex',
    'class': 'V',
    'roll_id': '2'
}
print(student.keys() >= {'class', 'name'})  # true
print(student.keys() >= {'name', 'Alex'})  # false
print(student.keys() >= {'roll_id', 'name'})  # true