/* excample program for static */
#include <stdio.h>
#include<stdlib.h>
int fun(int a,int b);
int main()
{
    int x,y,z;
    printf("\nEnter the two numbers ::");
    scanf("%d%d",&x,&y);
    z=fun(x,y);
    printf("\nthe sum of the two numbers : %d",z);
    return 0;
}