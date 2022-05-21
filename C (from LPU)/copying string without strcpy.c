#include<stdio.h>
int main()
{
    char ps[10],cs[10];
    int i=0;
    printf("enter string=");
    gets(ps);///Hello'\0'
    printf("\nSizeof Primary String is : %d\n",sizeof(ps));
    while(ps[i]!='\0')
    {
        cs[i]=ps[i]; ///cs[1] = ps[1] = e copy char by char
        i++;
    }
    printf("\ncopied string is=");
    cs[i]='\0';
    puts(cs);
}

