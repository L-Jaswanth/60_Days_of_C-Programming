#include <stdio.h>

int main()
{
    int num;
    printf("\nenter the number - Num :");
    scanf("%d",&num);
    if(num>0)
    {
        printf("value of Num is greater than zero");
        printf("\nIt is inside If");
    }
    else
    {
        printf("We are in Else Part");
        printf("\nValue of number is either zero or less than zero");
    }
    return 0;
}
