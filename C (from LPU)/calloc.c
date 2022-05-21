#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *x;
    int i,n;
    printf("how many elements do u want?");
    scanf("%d",&n);///5
    x=(float*)calloc(n,sizeof(float));///(5,4)
    if(x!=NULL)
    {
        printf("data is=\n");
        for(i=0;i<n;i++)
        {
            *x = i;
            printf("\n x[%d]=%f ",i,*(x));
        }

    }
    else
    printf("calloc is unable to allocate required Memory");
}
