#include <stdio.h>

int main()
{
     int a=10;
     int *ptr;
     ptr=&a;
     printf("\nThe value of a=%d",a);
     printf("\nThe address of a=%d",&a);
     printf("\nThe value of ptr=%d",ptr);
     printf("\nThe address of ptr=%d",&ptr);
     printf("\nThe value pointed by ptr=%d",*ptr);
     
     
     return 0;
}