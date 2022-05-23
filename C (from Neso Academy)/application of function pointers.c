#include <stdio.h>
#define ops 4

float sum(float a,float b) {return (a+b);}
float sub(float a,float b) {return (a-b);}
float mult(float a,float b) {return (a*b);}
float divi(float a,float b) {return (a/b);}

int main ()
{
  float (*ptr2func[ops])(float,float)={sum,sub,mult,divi};
  float a,b;
  int choice;
  printf("\nEnter the operation number you want to perform :: \n 0 for sum \n 1 for sub\n 2 for mult\n 3for divi :: ");
  scanf("%d",&choice);
  
  printf("Enter the two numbers : \n ");
  scanf("%f %f",&a,&b);
  
  printf("\nThe o/p :: %f",ptr2func[choice](a,b));
  return 0;
}
