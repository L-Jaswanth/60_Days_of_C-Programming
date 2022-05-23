#include <stdio.h>
struct{
    int a;
}set1,set2;

int add()
{
    struct{
        int c;
    }sum;
    sum.c=345;
    return sum.c;
}

int main()
{
    set1.a=3;
    set2.a=4;
    printf("set1.a :: %d \nset2.a :: %d",set1.a,set2.a);
    printf("\n%d is the o/p for add()",add());
    
    return 0;
}
