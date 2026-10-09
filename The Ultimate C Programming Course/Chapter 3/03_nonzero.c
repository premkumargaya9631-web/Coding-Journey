/*all non zero value can be true but not 0*/

#include<stdio.h>

int main()
{
  if(1)
  {
    printf("This if is executed\n");
  }

  if(0) // because this is zero 
  {
    printf("This if is  not executed\n");
  }
}
