#include <stdio.h>

int input(char str[],int n)
{
    int i=0,ch;
    while ((ch=getchar()) != '\n')
        if(i<n)
            str[i++]=ch;
    str[i]='\0';
    return i;
}
