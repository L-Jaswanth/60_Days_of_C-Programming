#include <stdio.h>

int main()
{
   int sum=0,n,i=1;
   printf("\nenter the number upto which you want to get the sum from 1 to n numbers:");
   scanf("%d",&n);
   
   do{
        printf("\n%d",i);
        sum=sum+i;
        i++;
        
   }while(i<=n);
   
   printf("\nthe sum of the above numbers = %d",sum);

    return 0;
}