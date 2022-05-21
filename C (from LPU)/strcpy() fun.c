//STRING COPY FUNCTION
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("enter string=");
    gets(s2);
    ///s2 = s1
    strcpy(s1,s2);///(dest,source)
    printf("\ncopied string= %s",s1);
    printf("\nfirst string=%s",s2);
}

