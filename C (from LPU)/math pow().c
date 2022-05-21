#include <stdio.h>
#include<math.h>

int main()
{
    int i,n;
    for(i=1;i<=8;i++)
    {
        for(j=0;j<=3;j++)
        {
            n=pow(i,j); //pow(3,3)
            printf("\npow(%d,%d) : %d",i,j,n);
        }
    
    }
}

