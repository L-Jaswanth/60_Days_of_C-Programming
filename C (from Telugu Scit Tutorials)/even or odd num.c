#include <stdio.h>

int
main ()
{
  int a;
  printf ("\nenter the number:");
  scanf ("%d", &a);

  if (a % 2 == 1)
    {
      printf ("\nthe number is odd");

    }
  else
    {
      printf ("\nthe number is even");
    }
}