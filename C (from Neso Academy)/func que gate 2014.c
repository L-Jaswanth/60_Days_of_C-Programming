/* gate 2014 que */

#include <stdio.h>
int func(int num);
int main()
{
    int a;
    a=func(435);
    printf("\nthe no.of counts :: %d",a);
    return 0;
}

int func(int num)
{
    int count =0 ;
    while(num)
    {
        count++;
        num >>= 1;
    }
    return (count);
}