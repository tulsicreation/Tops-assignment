// WAP to find simple interest 
 #include<stdio.h>
 int main()
 {
   int p;
   int r;
   int n;

   printf("the value of p is :");
   scanf("%d",&p);
    
   printf("the value of r is :");
   scanf("%d",&r);

   printf("the value of n is :");
   scanf("%d",&n);

   int i =p*r*n/100;

   printf("tje simple interest is %d",i);

   return 0;

 }
