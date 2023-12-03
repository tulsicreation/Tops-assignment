#The continue statement in Python is used to alter the flow of control in a loop. When the continue statement is 
#encountered within a loop (such as a for or while loop), it immediately jumps to the next iteration of the loop, 
#skipping the remaining code within the current iteration. In other words, it allows you to skip a specific iteration 
#of the loop and continue with the next one.!--> 



numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

for num in numbers:
    if num % 2 != 0:
        continue  
    print(num)