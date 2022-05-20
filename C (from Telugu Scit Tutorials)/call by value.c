/* using call by value */ 

#include <stdio.h>
int swap(int x, int y);

int main()
{
    int a=10,b=20;
    printf("\nbefore swapping ..\n");
    printf("a=%d\tb=%d",a,b);
    swap(a,b);  // function calling
    printf("\nafter swapping .. \n");
    printf("a=%d\tb=%d",a,b);
}

int swap(int x,int y)
{
     int t;
     t=x;
     x=y;
     y=t;
}
