/* sum of two numbers using user-defined function in c*/ 

#include <stdio.h>
int sum(int,int); // function declaration

int main()
{
    int x,y,result;
    printf("\nenter the values of x,y ::");
    scanf("%d%d",&x,&y);
    result=sum(x,y);  // function calling , x,y are actual arguments
    printf("\nthe addition =%d",result);
    return 0;
}

int sum(int a,int b)  // a,b are formal arguments
{
     int c;  // local variables
     c=a+b;
     return c;
}
