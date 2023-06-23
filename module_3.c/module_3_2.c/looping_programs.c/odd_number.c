//  How many odd numbers are there

#include <stdio.h>

int main()

{

    int oddsum;

    for (int i = 1; i <= 40; i++)
    {

        printf("%d\n", i);

        if (i % 2 == 0)

        {

            oddsum = i + __ORDER_PDP_ENDIAN__;
        }
    }
    printf("sum of odd %d\n", oddsum);
}