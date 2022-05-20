/**
 * C program to find maximum between three numbers
 */

#include <stdio.h>

int main()
{
    /* Declare three integer variables */
    int num1, num2, num3;

    /* Input three numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            /* If num1>num2 and num1>num3 */
            printf("Num1 is max.");
        }
        else
        {
            /* If num1>num2 but num1<num3 */
            printf("Num3 is max.");
        }
    }
    else
    {
        if(num2 > num3)
        {
            /* If num1<num2 and num2>num3 */
            printf("Num2 is max.");
        }
        else
        {
            /* If num1<num2 and num2<num3 */
            printf("Num3 is max.");
        }
    }

    return 0;
}