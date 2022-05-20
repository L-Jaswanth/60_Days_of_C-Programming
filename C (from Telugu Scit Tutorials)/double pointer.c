#include <stdio.h>

int
main ()
{
  int i = 10;
  int *ptr;
  int **dptr;

  printf ("\nThe value of i=%d", i);
  printf ("\nThe address of i =%d", &i);

  ptr = &i;
  printf ("\n\nThe value of ptr=%d", ptr);
  printf ("\nThe address of ptr=%d", &ptr);
  printf ("\nThe value pointed by ptr =%d", *ptr);

  dptr = &ptr;
  printf ("\n\nThe value of dptr=%d", dptr);
  printf ("\nThe address of dptr=%d", &dptr);
  printf ("\nThe double pointer pointed value=%d", **&dptr);

  return 0;

}

