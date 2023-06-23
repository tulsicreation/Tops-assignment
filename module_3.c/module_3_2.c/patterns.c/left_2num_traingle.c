// C program to print right half pyramid pattern of
// numbers
#include <stdio.h>
 
int main()
{
    int i,j;

 
    // first loop for printing rows
    for ( i = 1; i <=5; i++)
     {
 
        // second loop for printing alphabets in each rows
        for (int j = 1; j <= i; j++)
         {
            printf("%d ", j%2);
        }
        printf("\n");
    }
    return 0;
}