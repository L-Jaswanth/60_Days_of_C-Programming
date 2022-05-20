#include <stdio.h>

int main()
{
    char ch;
    printf("\nenter the aphabet:");
    ch=getchar();  /* OR  scanf("%d",&ch); */
    
    switch (ch)
    {
         case 'a':
         case 'A':
         case 'e':
         case 'E':
         case 'i':
         case 'I':
         case 'o':
         case 'O':
         case 'u':
         case 'U':
               printf("\n%c is vowel",ch);
               break;
          default:
               printf("\n%c is consonent",ch);
               break;
    } 
    return 0;
}
