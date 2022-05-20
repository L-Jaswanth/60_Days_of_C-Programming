#include <stdio.h>

float simpleinterest(int,float,int);
float simpleinterest(int p,float r,int n)
{
     float interest;
     interest=(p*r*n)/100;
     return interest;
}

int main()
{
    int p;
    float rate ,interest;
    int year;
    p=10000;
    rate=2.5;
    year=2;
    interest=simpleinterest(p,rate,year);
    printf("interest %f",interest);
    return 0;
}

