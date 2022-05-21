#include <stdio.h>

int main()
{
    char name[]="jaswanth";
    printf("\nname:: %s",name);
    
    char n1[100];
    printf("\nenter the name :: ");
    //scanf("%s",&n1);
    //printf("\n name1 ::; %s ",n1);
    gets(n1);
    puts(n1);
    return 0;
}


