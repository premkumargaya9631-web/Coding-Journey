#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    switch(a){
        case 1:
        printf("you entered 1\n");
        break;

        case 2:
        printf("you entered 2\n");
        break;

        case 3:
        printf("you entered 3\n");
        break;

        default:
        printf("you enter Number other than 1,2,3\n");
        break;

    }
 
    return 0;

}