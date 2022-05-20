#include <stdio.h>

int
main ()
{
  /* The character I/O function */
  char ch;
  printf ("\nThe enter the character:");
  ch = getchar ();
  putchar (ch);

  /* The string I/O function */
  char name[20];
  printf("\n\nenter name:");
  gets(name);
  puts(name);
  

  return 0;
}
