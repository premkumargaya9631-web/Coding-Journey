/*calculate the area of circle */

#include <stdio.h>

int main()
{
    int r, h, area, volume;
    printf("Enter the radius : ");
    scanf("%d",&r);

    printf("Enter the height : ");
    scanf("%d",&h);

    area = 2*3.14*r*r;
    volume = 3.14*r*r*h;

    printf("The area and volume of circle and volume : %d and %d", area, volume);
    return 0;
}
