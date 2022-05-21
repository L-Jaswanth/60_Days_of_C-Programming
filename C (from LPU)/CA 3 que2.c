#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int count_insensitive(char *str, char ch)
{
    //this function counts the no.of times that charater occoured in the entered string
    int n = 0;//used for count value
    int i; // used for for-loop and checking each and every char
    for (i=0;i<strlen(str);i++)
    {
        if (tolower(*(str+i))== tolower(ch)) // condition for upper and lower case char
        {
            n++; //counts +1 for every matched char 
        }
    }
    return n; // returns the no.of times the char searched
}

int main()
{
    char *ch=(char*)malloc(50*sizeof(char)); // char array using dynamic memory allocation
    printf("Enter the string ::");
    fgets(ch,50,stdin); //asks the user to enter the string
    printf("\nEnter the char you want to find the no.of times a char to search exist in char array::");
    char c=getchar(); // collecting the char that user wants to search
    int a=count_insensitive(ch,c); // the count number will be stored in a
    printf("The character '%c' occurs %d times.\n",c,a); // prints the no.of times the char searched
}

