#include<stdio.h>
#include<stdlib.h>
int main()
{
    int z,t;
    char x[10]="1234f.98";
    z=atoi(x);
    printf("%d\n",z);
    t=z+1;
    printf("%d",t);
}
