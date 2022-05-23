#include <stdio.h>

int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("\nEnter the number :");
    scanf("%d",&n);
    printf("\nThe factorial of the number %d is %d",n,fact(n));

    return 0;
}
