#include <stdio.h>
int main()
{ double number1 = 0.0; /* First operand: a decimal number */
double number2 = 0.0; /* Second operand: a decimal number */
char operation = 0; /* Operation - must be +, -, *, /, or % */
printf("\nEnter the calculation number1 Operator and then number2\n");
scanf("%lf %c %lf", &number1, &operation,&number2);
/* Code to check the input goes here */
switch(operation)
{ case '+' : /* No checks necessary for add */
printf("Sum = %lf\n", number1 + number2);
break;
//printf("\nPlus operation was called");
case '-': /* No checks necessary for subtract */
printf("Subtraction = %lf\n", number1 - number2);
break;
case '*': /* No checks necessary for multiply */
printf("Multiplication = %lf\n", number1 * number2);
break;
case '/':
if(number2 == 0) /* second operand cannot be zero */
printf("\n\n\aDivision by zero error!\n");
else
printf("Division = %lf\n", number1 / number2);
break;
case '%': /* second operand cannot be zero */
if((long)number2 == 0)
printf("\n\n\aDivision by zero error!\n");
else
printf("= %ld\n", (long)number1 % (long)number2);
break;
default: /* Operation is invalid*/
printf("\n\n\aIllegal operation!\n");
}
printf("\nOutside switch ");
}

