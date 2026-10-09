#include <stdio.h>

int main()
{
    int a=1; int b =1;
    printf("The value of a and b is %d\n",a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("the value of not a and not b is %d and %d\n", !a, !b);

    int c = 1; int d = 0;
    printf("The value of c and d is %d\n",c&&d);
    printf("The value of c or d is %d\n", c||d);
    printf("the value of not c and not d is %d and %d\n", !c, !d);

    int e=0; int f =1;
    printf("The value of e and f is %d\n",e&&f);
    printf("The value of e or fis %d\n", e||f);
    printf("the value of not e and not f is %d and %d\n", !e, !f);

    int g=0; int h =0;
    printf("The value of g and h is %d\n",g&&h);
    printf("The value of g or h is %d\n", g||h);
    printf("the value of not g and not h is %d and %d\n", !g, !h);

    if(a&&b>0)
    {
        printf("Both are 1\n");
    }

    if(g<1)
    {
        if(h<1)
        {
            printf("Both are true\n");
        }
         else
        {
            printf(" this is False\n");
        }
    }
     else
        {
            printf("False\n");
        }



    return 0;

}