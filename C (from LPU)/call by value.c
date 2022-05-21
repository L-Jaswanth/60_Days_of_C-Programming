#include<stdio.h>
void swap(int,int); //optional
main()
{
int a=10, b=20;
printf("before swapping %d %d \n",a, b);
swap(a,b); ///a,b are the actual args-----
printf("\nAfter Swapping %d %d",a, b);
}
void swap(int x, int y)///formal args x,y
{ ///x = a = 10, y = b = 20
printf(" before :swapped values in called function %d %d \n",x,y);
	int t;
	t=x;///t = 10
	x=y;  ///x = 20
	y=t; ///y = 10
printf(" swapped values in called function %d %d \n",x,y);
}