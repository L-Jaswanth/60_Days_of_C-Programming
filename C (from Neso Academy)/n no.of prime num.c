#include <stdio.h>
#include<math.h>

int main()
{
    int x,a;
    int i,val1,val2,count=0;
    printf("\nEnter a number upto which numbers u want prime numbers :");
    scanf("%d",&a);
    
    for (x=1;x<=a;x++)
    {
    val1=ceil(sqrt(x));
    val2=x;
    
    for(i=2;i<=val1;i++)
    {
        if (val2%i == 0)
            count=1;
    }
    
    if ((count == 0 && val2 != 1) || val2==2 || val2==3)
        printf("\n%d is a prime number",val2);
    /* else
        printf("\n%d is not a prime number",val2); */
    count=0;
    }
    return 0;
}
