#include <stdio.h>

int
main ()
{
  int i,n;
  printf("\nenter the number upto which you want to exectue:");
  scanf("%d",&n);
  i = 1;

  while (i <= n)
    {
      printf ("\n %d", i);
      i++;
    }

  return 0;
}
