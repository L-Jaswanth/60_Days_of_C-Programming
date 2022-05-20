#include <stdio.h>

int main()
{
     int i=10;
     printf("\nThe value of i=%d",i);
     printf("\nThe preIncrement of i=%d",++i);
     printf("\nThe PostIncrement of i=%d",i++);
     printf("\nThe value of i(after)=%d",i);
     
     int j=20;
     printf("\n\nThe value of j=%d",j);
     printf("\nThe preDecrement of j=%d",--j);
     printf("\nThe PostDecrement of j=%d",j--);
     printf("\nThe value of j(after)=%d",j);  
        
     return 0;
}