/* conversion of Fahrenheit into Celsius */

#include<stdio.h>
int main ()
{
  /* the short words used in this program are :
     Fahr :: Fahrenheit ,
     Cel :: Celsius 
   */

  float Fahr, Cel;
  printf ("Enter the temperature in America:");
  scanf ("%f", &Fahr);
  Cel = ((Fahr - 32) * 5) / 9;
  printf ("\n\n The temperature of America in Indian system is %f Celsius",Cel);
  return 0;
}


