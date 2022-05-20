/* do-while loop with condition FALSE at 1st time */

#include <stdio.h>

int main()
{
     int i;
     i=1;
     
     do{
          
        printf("Hello World");
        printf("\nThe value of i is %d",i);
        i++;
     }while(i<0);

    return 0;
}

