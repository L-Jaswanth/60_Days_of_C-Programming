#include <stdio.h>

#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;
    
    //part 1 
    printf("enter no.of the rows and columns of the matrix a : ");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the elements of martix a : \n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter no.of the rows and columns of the matrix b : ");
    scanf("%d %d",&brows,&bcolumns);
    if (brows != acolumns)
        printf("Sorry! we cannot multiple the matrices a and b");
    else
    {
        printf("Enter the elements of martix b : \n");
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                scanf("%d",&b[i][j]);
            }   
        }
    }
    
    printf("\n");
    
    //calculating the resulting matrix 
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            for(k=0;k<brows;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    
    //printing the array elements
    printf("Resulting Matrix \n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
