// information -print and display empno, empname, address and age

#include <stdio.h>

struct employee

{
    int emp_no;
    char address[30];
    int emp_age;
    char emp_name[20];
};

int main()
{
    struct employee obj;

    printf("enter your number :");
    scanf("%d", &obj.emp_no);

    printf("enter your address :");
    scanf("%s", &obj.address);

    printf("enter your age :");
    scanf("%d", &obj.emp_age);

    printf("enter your name ");
    scanf(" ");
    gets(obj.emp_name);

    printf("---------employee data--------\n");

    printf("employee number is %d\n", obj.emp_no);

    printf("employee address is %s\n", obj.address);

    printf("employee age is %d\n", obj.emp_age);

    printf("employee name is %s\n", obj.emp_name);
}