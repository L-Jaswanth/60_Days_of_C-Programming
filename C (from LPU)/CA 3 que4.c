#include <stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr =(int*) malloc(10 * sizeof(int));
    if (ptr != NULL)
    {
        *(ptr + 2) = 50;
        printf("Value of the 2nd integer is %d",*(ptr + 2));
        
    }
    free(ptr); //deallocate the dynamic memory 
    printf("\nValue of the 2nd integer is %d",*(ptr + 2));
    

}

