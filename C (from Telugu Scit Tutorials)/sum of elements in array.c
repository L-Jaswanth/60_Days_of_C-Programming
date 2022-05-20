/*  printing n no.of numbers by using array */ 

#include <stdio.h>

int main()
{
    int i,x,sum=0 ;
    printf("\nenter the no.of numbers you want to insert in the array:");
    scanf("%d",&x);
    
    int a[x];
    for (i=0;i<x;i++)
    {
        printf("\nenter the %d element of the array :",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    
    printf("\n The sum of the elements in the array =%d",sum);
    
    
    
    
}
