/* using nested for loop */

#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
         for(j=1;j<=5;j++)
         {
              printf("\nj%d",j);
         }
          printf("\ni%d\n\n ",i);        
    }
    return 0;
}
