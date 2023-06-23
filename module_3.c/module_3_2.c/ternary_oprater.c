// WAP to find number is even or odd using ternary operator 
#include<stdio.h>
int main()
{
   int num;

   printf("Enter number :");
   scanf("%d",&num);

   (num%2==0)?printf("even"):printf("odd");

   return 0;


}