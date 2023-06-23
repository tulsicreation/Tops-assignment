//Write a program make a summation of given number
#include <stdio.h>
    int
    main()
{
   int n, sum = 0, i;
   printf("Enter any number = :");
   scanf("%d", &n);
   
   
   
   for (i =1; i<=n; i++)
   {
      sum = sum +i;
   }

   printf("sum of natural number =%d,sum"); 

   return 0;
}
