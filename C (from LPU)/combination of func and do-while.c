#include <stdio.h>

void sum();

int main()
{
    int i=1;
    do{
        int b;
        sum();
        printf("\ndo you want to exicute again if yes press-1 or if no press-0 : ");
        scanf("%d",&b);
        if(b==1)
            i=1;
        else
            i=0;
    }while(i==1);
}

void sum()
{
    int a, b,s;
    printf("\nentert the two numbers to be added :");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("\nThe sum of the two numbers is %d",s);
}

