// 1. Monday to Sunday using switch case

#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("tuesday");
        break;
    }
    case 3:
    {
        printf("wednesday");
        break;
    }
    case 4:
    {
        printf("thuday");
        break;
    }
    case 5:
    {
        printf("friday");
        break;
    }
    case 6:
    {
        printf("saturday");
        break;
    }
    case 7:
    {
        printf("sunday");
        break;
    }
    default:
    {
        printf("Invalid number");
        break;
    }
    }

    return 0;
}