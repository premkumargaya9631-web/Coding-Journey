#include<stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age>10)
    {
        printf("your age is greater than ten\n");
    }


    if (age%5==0)
    {
        printf("yOur age is divisbler by 5\n");
    }

    return 0;
}