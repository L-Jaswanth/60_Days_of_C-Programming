#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n; //used for asking size
    printf("\nEnter the size of the array ::");
    scanf("%d",&n);
    int i,len=n;
    float *arr=(float*)calloc(n,sizeof(float)); // dynamic memory allocation
    printf("\nEnter the float values of the array:");
    for(i=0; i<n; i++)
    {
        printf("arr[%d]:",i+1);
        scanf("%f",&arr[i]);
    }
    
    if(n%2==1) //condition for odd no.of size
     {
        printf("\nArray in reverse order: ");
        for(i = n-1; i>=0; i--) //i starts from end of the array
        {
        printf("%f\t", arr[i]);// prints from back to first 
        }
    }
    else //if not odd then even
    {
        // interchanging for even positions
        float temp1;
        for(i=0;i<n;i+=2) // i goes from 0 to even position values
        {
           if(i+2>=n) // condition for breaking the loop of even positions
                break;
            temp1=arr[i]; 
            arr[i]=arr[i+2];
            arr[i+2]=temp1;
            
        }
        //interchanging for odd positions
        float temp2;
        for(i=1;i<n;i+=2) // i goes from 1 to odd position values
        {
            if(i+1>=n)  // condition for breaking the loop of odd positions
                break;
            temp2=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp2;
            
        }
        printf("\nAfter the interchange the alternate even and odd position values ::");
        for(i=0;i<n;i++)
        {
            printf("arr[%d] :%f\t",i+1,arr[i]);
        }
    }
    return 0;
}
