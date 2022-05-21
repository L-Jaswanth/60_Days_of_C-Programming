#include<stdio.h>
int main()
{
    char *g="C Programming";
    int length=0,i=0;
    while(*g!='\0')
    {
        printf("%c",*g);//Value at address
        g++;//Pointer is incremented by 1 after each iteration
        length++;//Variable for counting length
    }
    printf("\nLength of the string is:%d",length);
    return 0;
}
