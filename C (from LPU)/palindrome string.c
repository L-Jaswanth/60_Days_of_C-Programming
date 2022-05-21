#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    int result;
    printf("\nEnter any string: ");
    gets(s1);///abhi
    strcpy(s2, s1);
    strrev(s2);///ihba
    result = strcmp(s1, s2);
    if(result == 0)
        printf("\nIt is a palindrome string");
    else
        printf("\nIt is not a palindrome string");
}
