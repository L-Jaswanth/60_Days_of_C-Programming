#include <stdio.h>

int
main ()
{
     int a, b;
     a = 20;
     b = 10;

     printf ("\nThe value of a:%d", a);
     printf ("\nThe value of b:%d", b);
     printf ("\nThe shorthand addition:%d", (a+= b));
     printf ("\nThe shorthand subtraction:%d", (a-= b));
     printf ("\nThe shorthand multiplication:%d", (a*= b));
     printf ("\nThe shorthand division:%d", (a/= b));
     printf ("\nThe shorthand remainder:%d", (a%= b));

     return 0;
}
  