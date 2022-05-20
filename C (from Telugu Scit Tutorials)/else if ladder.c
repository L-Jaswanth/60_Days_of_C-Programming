/* using else if ladder construct */
/* to find the student is pass or fail*/

#include <stdio.h>

int
main ()
{
  int marks;
  printf ("\nenter the marks :");
  scanf ("%d", &marks);

  if (marks >= 75)
    {
      printf ("\nDistinction");
    }

  else if (marks >= 60)
    {
      printf ("\nFirst calss");
    }

  else if (marks >= 50)
    {
      printf ("\nSecond class");
    }

  else if (marks >= 40)
    {
      printf ("\nthrid class");
    }

  else
    {
      printf ("\nFAIL");
    }

  return 0;
}