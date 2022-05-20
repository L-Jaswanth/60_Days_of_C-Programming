     
// C program to find largest among two
// numbers using ternary operator

#include <stdio.h>

int main()
{
	int m = 5, n = 4;

	(m > n) ? printf("m is greater than n that is %d > %d",	m, n)
			: printf("n is greater than m that is %d > %d",	n, m);
			
			
	printf("\n\n");
	int a,b,c;
	a=6;
	b=3;
	c=(a>b)?b:a ;
	printf("\nthe value of c:%d",c);
	

	return 0;
}
