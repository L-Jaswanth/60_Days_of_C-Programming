#include <stdio.h>

int main()
{
    int n, result=0,q,rem;
    printf("\nEnter the number ::");
    scanf("%d",&n);
    
    q=n;
    
    while(q != 0)
    {
        rem=q%10;
        result=result*10+rem;
        q=q/10;
    }
    
    printf("\nThe reverse of the number is %d",result);
    
    if(result==n)
        printf("\nIts a palindrome");
    else
        printf("\nNo! its not a palindrome");

    return 0;
}

