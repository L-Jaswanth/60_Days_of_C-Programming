#include <stdio.h>

int main()
{
     int a,b,c,d;
     a=1;
     b=2;
     c=a>b;
     d=a<b;
     
     
     printf("\nlogical AND operator ::%d",(c&&d));
     printf("\nlogical OR operator ::%d",(c||d));
     printf("\nlogical NOT operator ::%d",!c);
     

    return 0;
}
