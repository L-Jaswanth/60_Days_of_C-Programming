#include <stdio.h>

int main()
{
    int x,y;
    printf("\nEnter the two numbers (only +ve integers ):");
    scanf("%d%d",&x,&y);
    while(y != 0)
    {
        x++,y--;
    }
    printf("\nThe sum of the two numers is %d",x);
    return 0;
}
