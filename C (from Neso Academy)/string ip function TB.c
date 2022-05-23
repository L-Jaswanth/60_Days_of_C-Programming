#include <stdio.h>

int main ()
{
  char line[100], character;
  int c = 0;
  printf ("Using getchar enter the string :: ");
  do
    {
      character = getchar ();
      line[c] = character;
      c++;
    }
  while (character != '\n');
  line[c] = '\0';

  printf ("\nThe string is :: %s", line);
}
