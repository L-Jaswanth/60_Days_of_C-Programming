#include <stdio.h>

int main()
{
    int n,q,result=0,i,fact=1,rem;
    printf("\nEnter the number ::");
    scanf("%d",&n);
    
    q=n;
    
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
    
    if(result==n)
        printf("\nThe number you entered is a strong number");
    else
        printf("\nThe number you entered is not a strong number");

    return 0;
}