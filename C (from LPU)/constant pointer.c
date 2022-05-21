#include <stdio.h>

int
main ()
{
  int a = 3324,b=45;
  int *const ptr1 = &a;
  ptr1=&b;
  void *const ptr2 = &a;
  printf ("\nptr1 ::%u", *(int *) ptr1);
  printf("\nptr2 ::%u",*(int*)ptr2);
  return 0;
}
