#include <stdio.h>

int main()
{
    char ch;
    printf("\nenter an alphabet:");
    scanf("%c",&ch);
    
    if (ch>=65 && ch<=90)
     {
          printf("\n%c is in upper case",ch);
     }
     
     else 
     {
          printf("\n%c is in lower case",ch);
     }
}