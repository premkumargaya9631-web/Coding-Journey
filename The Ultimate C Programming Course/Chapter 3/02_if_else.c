#include<stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age>18)
    {
        printf("Your are Eligible\n");
    }

    else
    {
        printf("You are not Eligible\n");
    }

    return 0;
}