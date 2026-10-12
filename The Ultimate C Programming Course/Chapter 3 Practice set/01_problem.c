#include<stdio.h>

int main()
{
int a = 10;

if (a = 11) // here will thw output I am 11 coz we are using assignment operator in if.
    printf("I am 11\n");
else
    printf("I am not 11\n");

int b = 10;

if (b == 11)// here we are using relational operator 
    printf("I am 11\n");
else
    printf("I am not 11\n");

return 0;

}