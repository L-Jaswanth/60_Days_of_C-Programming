/* a C program to implement time unit converter */

#include <stdio.h>

int main ()
{
  /*  The unit conversions between the times, 
     as follows with a short names ::
     min      :: minutes
     hrs      :: hours
     sec      :: seconds
     millisec :: milliseconds
   */

  float min, hrs, sec, millisec;
  /* convertion from minutes to hours */
  printf ("\nEnter the value of minutes to convert into hours :");
  scanf ("%f", &min);
  hrs = min / 60;
  printf ("\nThere are %f hours in %f minutes", hrs, min);
  
  /* convertion from hours to minutes */
  printf ("\n\nEnter the value of hours to convert into minutes:");
  scanf ("%f", &hrs);
  min = hrs * 60;
  printf ("\nThere are %f minutes in %f hours", min, hrs);
  
  /* convertion from hours to seconds */
  printf ("\n\nEnter the value of hours to convert into seconds:");
  scanf ("%f", &hrs);
  sec = hrs * 3600;
  printf ("\nThere are %f seconds in %f hours", sec, hrs);
  
  /* convertion from seconds to hours */
  printf ("\n\nEnter the value of seconds to convert into hours:");
  scanf ("%f", &sec);
  hrs = sec / 3600;
  printf ("\nThere are %f hours in %f seconds", hrs, sec);
  
  /* convertion from milliseconds to seconds */
  printf ("\n\nEnter the value of milliseconds to convert into seconds:");
  scanf ("%f", &millisec);
  sec = millisec / 1000;
  printf ("\nThere are %f seconds in %f milliseconds", sec, millisec);
  
  /* convertion from seconds to milliseconds */
  printf ("\n\nEnter the value of seconds to convert into milliseconds:");
  scanf ("%f", &sec);
  millisec = sec * 1000;
  printf ("\nThere are %f milliseconds in %f seconds", millisec, sec);

  return 0;
}