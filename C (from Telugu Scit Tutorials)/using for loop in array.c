/* using for- loop  in array */ 

#include <stdio.h>

int main()
{
    int n,i,b;
    printf("\n enter the number of elements u want to store in array :");
    scanf("%d",&n);
    int a[n];
    
    for (i=0;i<n;i++)   // for getting inputs 
    {
        printf("\n enter the %d value of array:",i);
        scanf("%d",&a[i]);
    }
    
    for (b=0;b<n;b++)  // for getting outputs
    {
        printf(" the a[%d] element of the array is ",b);
        printf("%d\n",a[b]);
    }
    
    
    
    return 0;
}
