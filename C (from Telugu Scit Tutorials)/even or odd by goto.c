/* even or odd number by using goto */

#include <stdio.h>

int
main ()
{
     int n;
     printf ("\nenter n value::");
     scanf ("%d", &n);

     if (n % 2 == 0)
     {
          goto even;
     }
     else
     {
          goto odd;
     }  
     
     odd:
     {
          printf ("\n%d is odd number",n);
     }
     even:
     {
          printf ("\n%d is even number",n);
     } 
    
     return 0;
}