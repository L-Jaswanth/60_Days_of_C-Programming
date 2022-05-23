#include <stdio.h>
#define x 5
int main()
{
    int *p;

    printf("\nEnter the elements of the array::");
    int i,a[x];
    for (i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nThe reseve order of the array is ::\n");
    for(p=a+x-1;p>=a;p--)
    {
        printf("%d ",*p);
    }
    return 0;
}
