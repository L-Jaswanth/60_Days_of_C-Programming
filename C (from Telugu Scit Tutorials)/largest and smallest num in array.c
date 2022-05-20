#include <stdio.h>

int main()
{
    int a[100],n,i,large=0 , small=0;
    printf("\nEnter no.of elements you want? ");
    scanf("%d",&n);
    
    printf("\nEnter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    printf("\nthe array elements are -- \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    large=a[0];
    small=a[0];
    for(i=1;i<n;i++)
    {
        
        if(a[i]>large)
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
        
    }
    printf("\nthe largest value = %d ",large);
    printf("\nthe smallest value = %d ",small);
}
