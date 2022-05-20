/* using nested do while loop in c */

#include <stdio.h>

int main()
{
    int i,j;
    i=1;
    
    do{
         j=i;
         
         do{
              printf("j%d",j);
              j++;
         }while(j<=5);
         printf("i%d",i);
         printf("\n");
         i++;
    }while(i<=5);
    return 0;
}


