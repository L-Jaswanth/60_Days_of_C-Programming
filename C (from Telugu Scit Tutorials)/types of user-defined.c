/*types of user-defined functions in c */

#include <stdio.h>
void biggest_num1();               //function with no args and no return
int biggest_num2();                //function with no args and with return
void biggest_num3(int a,int b);    //function with args and no return
int biggest_num4(int a,int b);     //function with args and with return

int main()
{
    /* function with no args and no return */
    biggest_num1();
    
    /* function with no args and with return */
    int result2;
    result2 = biggest_num2();
    printf("\nthe biggest_num2 = %d",result2);
    
    /* function with args and no return */
    int x,y;
    printf("\nenter the values of x,y ::");
    scanf("%d%d",&x,&y);
    biggest_num3(x,y);
    
    /* function with args and with return */
    int m,n,result4;
    printf("\nenter the values of m,n ::");
    scanf("%d%d",&m,&n);
    result4 = biggest_num4(m,n);
    printf("\nthe biggest_num4 = %d",result4);
}

void biggest_num1()
{
     int a1,b1;
     printf("\nenter the values of a1,b1 :: ");
     scanf("%d%d",&a1,&b1);
     if (a1>b1)    
          printf("\n%d is bigger than %d",a1,b1);
     else
          printf("\n%d is bigger than %d",b1,a1);
}

int biggest_num2()
{
     int a2,b2,big2;
     printf("\nenter the values of a2,b2 :: ");
     scanf("%d%d",&a2,&b2);
     if (a2>b2)
          big2=a2;
     else
          big2=b2;
     return big2;
     
}

void biggest_num3(int a3,int b3)
{
     if (a3>b3)
          printf("\n%d is bigger than %d",a3,b3);
     else
          printf("\n%d is bigger than %d",b3,a3);
}

int biggest_num4(int a4,int b4)
{
     int big4;
     if (a4>b4)
          big4=a4;
     else
          big4=b4;
     return big4;
}
