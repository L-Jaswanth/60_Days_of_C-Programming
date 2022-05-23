#include<stdio.h>
struct car{
    char a;
    char b;
    int c;
    
};
int main()
{
    struct car a;
    printf("%d",sizeof(a));
    return 0;
}
