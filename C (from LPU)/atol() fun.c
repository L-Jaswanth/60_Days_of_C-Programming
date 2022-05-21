#include<stdio.h>
#include<stdlib.h>
int main()
{
int z,t;
char x[10]="123e4";
z=atol(x);
printf("%d\n",z);
t=z+1;
printf("%d",t);
}
