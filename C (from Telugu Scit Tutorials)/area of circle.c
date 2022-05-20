#include<stdio.h>
#include<conio.h>
#define PI 3.141  

int main()   
{  
    float radius, area;  
    printf("\nEnter radius of circle::");  
    scanf("%f", & radius);  
    area = PI * radius * radius;  
    printf("\nArea of circle :: %0.4f", area);  
    getch();  
    return 0;  
} 
