#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if (age>60)
    {
        printf("You can drive and you are senior sitizen\n");
    }
    else if (age>=18)
    {
        printf("You can drive\n");

    }
    else if(age>=16)
    {
        printf("You can drive but as learner\n");
    }
    else
    {
        printf("you can not drive\n");
    }
    return 0;

}