#include <stdio.h>

int
main ()
{
  int a, b;
  a = 20;
  b = 30;

  printf ("\nThe value of a: %d", a);
  printf ("\nThe value of b: %d", b);
  printf ("\nThe value of add: %d", a + b);
  printf ("\nThe value of sub: %d", a - b);
  printf ("\nThe value of mult: %d", a * b);
  printf ("\nThe value of division: %d", a / b);
  printf ("\nThe value of remainder: %d", a % b);

  return 0;
}