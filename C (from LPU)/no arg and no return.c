#include <stdio.h>

void sum();

int main()
{
    printf("\nInside main");
    sum();
    printf("\nBack to main");
    return 0;
}

void sum()
{
    int n1,n2,s;
    printf("\nEnter the two numbers ::");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    printf("The sum of the numbers is %d",s);
}