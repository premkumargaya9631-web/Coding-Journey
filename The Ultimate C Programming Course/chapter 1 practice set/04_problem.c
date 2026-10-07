/*Write a program to calculate simple interest for a set of values representing principal,
number of years, and rate of interest*/

#include <stdio.h>
int main()
{
    float si, p, t , r;

    printf("Principal = ");
    scanf("%f",&p);

    printf("Time = ");
    scanf("%f",&t);

    printf("rate = ");
    scanf("%f",&r);

    si = (p*r*t)/100;

    printf("The SI of principal %f, time %f , rate %f is %f\n ", p,t,r,si);
    return 0;

}