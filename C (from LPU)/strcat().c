//PROGRAM TO CONTACENATE TWO STRINGS USING STRCAT()
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter text 1=");
    gets(s1);/// hello
    printf("enter text 2=");
    gets(s2);///world
    ///totallenght = lenS1+lenS2
    ///sizeof(S1)
    ///if(Sizeof(S1)> totallenght+1)

    strcat(s1,s2);///s1 = helloworld
    printf("%s",s1);

    int length;
    length = strlen(s2);
    printf("\n %d", length);
}
