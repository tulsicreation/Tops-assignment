// WAP to print table up to given numbers
#include <stdio.h>

int main()

{

    int i;
    int n;

    printf("enter value of n:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)

    {

        printf("%d * %d = %d\n", i, n, i * n);
    }
}