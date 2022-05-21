#include <stdio.h>
int fibo(int x);
int main()
{
    int n;
    printf("\nEnter the number :");
    scanf("%d",&n);
    printf("%d",fibo(n));
}

int fibo(int n)
{
    if(n>0)
        return (n+fibo(n-2));
}
