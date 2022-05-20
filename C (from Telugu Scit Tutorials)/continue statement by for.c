/* continue statement by using for loop */

#include <stdio.h>

int main()
{
    int i;
    for (i=1;i<=10; i++)
    {
         if(i==5)
         {
              printf("\n");
              continue;
         }
         printf("\n%d",i);
    }
    printf("\nthe program ended");
    return 0;
}