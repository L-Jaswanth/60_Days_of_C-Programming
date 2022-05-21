#include <stdio.h>

int main()
{
    int n,x;
    int i=0;
    printf("\nEnter the number ::");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("\n\n for %d table ::",i);
        for(x=1;x<11;x++)
        {
            int p;
            p=x*i;
            printf("\n %d * %d = %d",i,x,p);
        }
    }
    
}