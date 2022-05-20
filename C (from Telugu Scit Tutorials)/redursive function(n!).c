// USING OF RESURSIVE FIUNCTION 
// example program of n! function

#include <stdio.h>
int fact(int);

int main()
{
    int n,res;
    printf("\nenter the n value:");
    scanf("%d",&n);
    res=fact(n);
    printf("\n the factorial of %d is %d",n,res);
}

int fact(int n)
{
     if(n>1)
     {
          return n*fact(n-1);
     }
     else
     {
          return 1;
     }
}

