#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j,len;
    printf("enter 1st string=");
    gets(a);///hello
    printf("enter 2nd string=");
    gets(b);///world
    len=strlen(a);///5
    ///difference between sizeof(a) and strlen(a)
    ///hello
    for(i=len,j=0;b[j]!='\0';i++,j++)
    {/// i = 5, j= 0
        a[i]=b[j];///a[6] = b[1] //a[] = hellowo
    }
    a[i]='\0';///helloworld\0
    printf("after concatenation=");
    puts(a);
    //getch();
}
