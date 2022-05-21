//STRING COMPARISION FUNCTION
#include <stdio.h>
#include <string.h>
main()
{
char a[100], b[100];
printf("Enter the first string=");
gets(a);
printf("\nEnter the second string=");
gets(b);
///(hello==Hello)
/// A--Z 65 - 90
///a--z 97 - 122
if(strcmp(a,b) == 0 )
printf("Entered strings are equal.\n");
else if(strcmp(a,b)>0)
{
printf("Entered strings are not equal.\n");
printf("\n a is greater");
}
else
{
printf("Entered strings are not equal.\n");
printf("\n b is greater");

}

// printf("hi");
//return 0;
}
