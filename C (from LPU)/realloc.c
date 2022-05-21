#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i;
    ptr = (int *)calloc(5, sizeof(int));
    *ptr = 1; ///arr[0] = 1 ptr[0] = 1;
    *(ptr+1) = 2;
    ptr[2] = 4;
    ptr[3] = 8;
    ptr[4] = 16;
    ptr = (int *)realloc(ptr, 7*sizeof(int));
    printf("Now allocating more memory... \n");
    ptr[5] = 32; /* now it's legal! */
    ptr[6] = 64;
    ////////////////
    ptr[7] = 128;/// not legal
    for(i=0 ; i<8; i++)
    {
        printf("ptr[%d] holds %d\n", i, ptr[i]);
    }
    free(ptr);
}
