/*         --Structures--vs--union--

1> Struct keyword is used to declare the structure
                --vs--
1> Union keyword is used to declare it

2> The structure variable will allocate memory for all the structure members separately.
                              --vs--
2> The union variable will allocate common memory for all the union members.

3> The union variable will allocate common memory for all the union members.
                                         --vs--
3> Example:union Employee
            {
                int age;
                char name[50];
                float salary;
            };
 4 > Structures will occupy more memory space.Memory_Size
             = addition of all the structure members sizes.Memory_Size
             = int + char array[50] + float Memory_Size
              = 2 + 50 + 4 Bytes Memory_Size
               = 56 Byte

               ----vs----
4> The union will occupy less memory space compared to structures.
  Memory_Size = Size of the largest Union member.
  From the above example, the Largest member is the char array. 
   So, Memory_Size = 50 Bytes 


5> It allows us to access any or all the members at any time.
                    --vs--
5> It allows us to access only one union member at a time.
*/