#include<stdio.h>
int main()
{
    
    int low=0,high=6,mid,key, c=0 ;
    int a[7]={1,3,7,8,22,36,55};
    printf("enter the element to be searched:");
     scanf("%d",&key); ///22
    while(low<=high) ///l=h=4
    {
        mid=(low+high)/2; ///mid[4] == 22 , l=h=4
        if(key==a[mid])///22==22
        {
            printf("element %d is found at location %d ",key,mid+1);
            c++;
            break;
        }
        else if(key<a[mid])///22<36
        {
            high=mid-1; ///high = 4
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
    }
    if (c==0)
    printf("\nElement not found");
    //getch();
}
