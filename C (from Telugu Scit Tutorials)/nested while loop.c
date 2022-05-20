/* printing 1 to 10 numbers using nested while loop */

#include <stdio.h>

int main()
{
    int i=0,j=0;
    
    while(++i<=5)
    {
         while(++j<=5)
         {
              printf("\n%d",j);
         }
          printf("\n%d",j);       
    }
    return 0;
}

