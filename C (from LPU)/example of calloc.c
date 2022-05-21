#include<stdio.h>
#include<stdlib.h>
main()
{
    int *i, j, *ptr =(int *) calloc(5,sizeof(int));
    if(ptr==NULL)
    {
        printf("we are probably out of memory");
        exit(1);
    }
    printf("Default values are : \n");
    for(j=0,i=ptr;j<5;i++,j++)
    {
    printf("i= %d \t *i=%d\n ",i,*i);
    }
    for(i=ptr,j=0;j<5;i++,j++)
    {
        *i= j+1;
    }
    printf("New Values: \n");
    for(j=0,i=ptr;j<5;i++,j++)
    {

        printf("i= %d \t *i=%d \n",i,*i);
    }
    return 0;
}
