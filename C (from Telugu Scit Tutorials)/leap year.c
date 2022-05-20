#include <stdio.h>

int
main ()
{
  int year;
  printf ("\nenter the year value:");
  scanf ("%d", &year);

  if (year % 4 == 0)
    {
      printf ("\n%d is a leap year", year);
    }

  else
    {
      printf ("\n%d is not a leap year", year);
    }
}