// WAP to find the area of circle
 
#include<stdio.h>
int main()
{
  float pi;
  int r;

  printf("enter the valuenfor pi:");
  scanf("%f",&pi);
  printf("enter the value for r:");
  scanf("%d",&r);

  float a = pi*r*r;

  printf("your area of circle is %f",a);

}