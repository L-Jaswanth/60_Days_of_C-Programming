/* arithmetic operations using switch case */

#include <stdio.h>

int
main ()
{
  int a, b, ch;
  printf ("\nenter the values of a and b::");
  scanf ("%d%d", &a, &b);

  printf ("\n 1 - add \n 2 - sub \n 3 - mut \n 4 - div \n 5 - moddiv \n");
  printf ("\n enter the operation number u want to perform::");
  scanf ("%d", &ch);

  int x;

  switch (ch)
	     {
	     case 1:
	          printf ("\nthe addition of %d and %d is %d", a, b, (a + b));
	          break;
	     case 2:
	          printf ("\nthe subtraction of %d and %d is %d", a, b, (a - b));
	          break;
	     case 3:
	          printf ("\nthe mutiplication of %d and %d is %d", a, b, (a * b));
	          break;
	     case 4:
	          printf ("\nthe division of %d and %d is %d", a, b, (a / b));
	          break;
	     case 5:
	          printf ("\nthe modulodivision of %d and %d is %d", a, b, (a % b));
	          break;

	     default:
	          printf ("\n enter the operation number given above::");
	          break;
	      }

     
  return 0;
}
