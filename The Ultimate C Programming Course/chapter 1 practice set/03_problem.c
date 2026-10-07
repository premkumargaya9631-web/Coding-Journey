#include<stdio.h>
int main()
{
    float celcius , fahrenheit;
    printf("celcius = ");
    scanf("%f",&celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("Fahrenheit = %f",fahrenheit);
    return 0;
}