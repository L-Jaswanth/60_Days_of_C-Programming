/* printing n natural numbers and finding its sum by using  - for loop */

#include <stdio.h>

int main()
{
    int i,n,sum=0;;
    printf("\nenter n value:");
    scanf("%d",&n);
    
    for(i=1;i<=n; i++)
    {
         printf("\n%d",i);
         sum=sum+i;
    }
    
    printf("\nthe sum of 1st %d natural umbers =%d",n,sum);

    return 0;
}