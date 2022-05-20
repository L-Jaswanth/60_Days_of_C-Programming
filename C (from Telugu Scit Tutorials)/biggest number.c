#include <stdio.h>

int main()
{
     int a,b,c;
     a=20;
     b=15;
     c=30;
     
     printf("\nThe value of A:%d",a);
     printf("\nThe value of B:%d",b);
     printf("\nThe value of C:%d",c);
     
     if (a>b && a>c)
          printf("\nA is biggest number");
     else if (b>c)
          printf("\nB is biggest number");
     else 
          printf("\nC is biggest number");


    return 0;
}