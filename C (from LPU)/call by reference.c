//call by reference
#include<stdio.h>
swap(int *x, int *y) ///* value at (&a), (&b)
{///x = &a, y = &b
	int t;
	t=*x;/// 10 = *(&a)
	*x=*y;/// *(&a) = *(&b); *(&a)=20
	*y=t;
	//printf("Value in called function %d %d \n",x,y);
	printf("Value in called function %d %d \n",&x,&y);
}
int main()
{
	int a=10, b=20;
	printf("%d %d before\n",a, b);
 	 swap(&a,&b);
	printf("\n %d %d after",a, b);
}
