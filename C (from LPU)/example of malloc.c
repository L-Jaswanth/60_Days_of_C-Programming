#include<stdio.h>
#include<stdlib.h>
main()
{
    int number;
    printf("Enter the number you want to store\n");
    scanf("%d",&number);
    int *i, j, *ptr = (int *) malloc(sizeof(int)*number);
    if(ptr==NULL)
    {
        printf("we are probably out of memory");
        exit(1);
    }
    printf("Default values are : \n");
    for(j=0,i=ptr;j<number;i++,j++)
    {
        printf("i= %d \t *i=%d\n ",i,*i);
    }
    for(i=ptr,j=0;j<number;i++,j++)
    {
        *i= j+1;
    }
    printf("New Values: \n");
    for(j=0,i=ptr;j<number;i++,j++)
    {
        printf("i= %d \t *i=%d \n",i,*i);
    }
    return 0;
}

