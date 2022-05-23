#include <stdio.h>

int main()
{
    int a[2][2]={{1,2},{3,4}};
    printf("\nprinting the following comands ::");
    printf("\na (pointer to 1st 1D array ) : %p",a);
    printf("\na+1 (pointer to 2nd 1D array) : %p",a+1);
    printf("\n*a (pointer to 1st element of ) : %p",*a);
    printf("\n**a (1st element of 1st 1D array) : %d",**a);
    printf("\n*(a+1) (pointer to the 1st element of 2nd 1D array) : %p",*(a+1));
    printf("\n**(a+1) (1st element of 2nd 1D array) : %d",**(a+1));
    printf("\n*(a+1)+1 (pointer to the 2nd element of 2nd 1D array) : %p",*(a+1)+1);
    printf("\n*(*(a+1)+1) (pointer to the 2nd element of 2nd 1D array) : %d",*(*(a+1)+1));
    
    /* printf("\n*(a+1)-1 (pointer to 2st element of 1st 1D array ) : %p",*(a+1)-1);
    printf("\n*((*a+1)-1) (2nd element of 1st 1D array) : %d",*((*a-1)-1)); */ 
    return 0;
}