#include<stdio.h>
int main()
{
    int a[100],i,element,n,t=0;
    printf("\nEnter the no of Elements: ");
    scanf("%d", &n);///n = 5
    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            printf("\n Enter Element %d: ",i+1);
            scanf("%d",&a[i]);
        }
        printf("\nEnter the element to be searched: ");
        scanf("%d", &element);///element = 80

        for(i=0;i<n;i++)
        {   
            if(a[i] == element)///a[0] 52  == 80
            {
                t=1;
                //count++;
                printf("\nElement found at position %d",i+1);
                 ///break;
            }

        }
        //printf("\n Count is: %d",count);
        if(t==0)
        {
            printf("\nElement not found");
        }
    }
    else
        printf("Number of elements should be more than 0");
}
