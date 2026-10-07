/*Write a c program to calculate the area of rectangle
using inputs supplied by user*/

#include <stdio.h>

int main ()
{
    int lenght, breadth, area;

    printf("Enter the lenght : ");
    scanf("%d", &lenght);

    printf("Enter the breadth : ");
    scanf("%d", &breadth);      

    area = lenght*breadth;

    printf("The area of rectangle is %d\n", area);
    return 0;
}