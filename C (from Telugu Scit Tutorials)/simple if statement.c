#include<stdio.h>
#include<conio.h>
void
main ()
{
  int num = 0;
  printf ("enter the number");
  scanf ("%d", &num);
  if (num % 2 == 0)
    {
      printf ("%d number in even", num);
    }
  getch ();
}