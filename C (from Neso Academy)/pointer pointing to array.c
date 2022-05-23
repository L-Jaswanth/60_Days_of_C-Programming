#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int (*p)[5]=&a;
    printf("\n 1st pointer pointing to whole array :: %d",**p);
    
    int *b=a;
    printf("\n 2nd pointer pointing to 1st element of array :: %d",*b);
    
}