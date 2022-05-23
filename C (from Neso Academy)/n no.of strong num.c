#include <stdio.h>

int main()
{
    int n,q,result=0,i,fact=1,rem;
    printf("\nEnter the number upto where do u want the strong numbers ::");
    scanf("%d",&n);
    
    int a=1;
    for (a=1;a<=n;a++)
    {
        
    q=a;
    
    while(q != 0)
    {
        rem=q%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
    }
    
    if(result==a)
        printf("\nthis %d is a strong number",result);
        
    result=0;
    }
}