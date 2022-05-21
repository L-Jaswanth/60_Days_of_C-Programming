#include<stdio.h>

int main()

{

    int *ptr; //wild pointer 
    printf("wild pointer ptr ::%u\n",ptr);  // gives Any address
    printf("wild pointer *prt::%d\n",*ptr); // gives Garbage value
    
    int x = 10;
    ptr = &x; // p is not a wild pointer now
    printf("non-wild pointer ::%u\n",ptr); // gives address of x
    printf("non-wild pointer ::%d",*ptr); // gives value of x
    return 0;
}
