/*Write a program to check whether a number is divisible by 97 or not without if .*/

#include<stdio.h>
int main()
{
    int a; 
    printf("Enter the no. : ");
    scanf("%d",&a);

    printf("\nThe remainder of n. is : %d\n",a%97);
    printf("*if the remainder of no. is 0 then its is divisble by 97 otherwise not\n*");

    return 0;
}