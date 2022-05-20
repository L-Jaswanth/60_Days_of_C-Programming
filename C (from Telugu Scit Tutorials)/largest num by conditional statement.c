/* biggest of three no using conditional statements */

#include <stdio.h>

int
main ()
{
  int a, b, c, big;
  printf ("\nenter the values a,b,c:");
  scanf ("%d%d%d", &a, &b, &c);

  big = (a > b && a > c) ? a : ((b > c) ? b : c);
  printf ("\nThe biggest number is %d", big);
  return 0;
}