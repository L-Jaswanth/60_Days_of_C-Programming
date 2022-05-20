#include <stdio.h>

int main()
{
     int a, b,c,d,e;
     printf("\nenter the numbers :");
     scanf("%d%d",&a,&b);
     
     
     do{
     printf("\n\n1)add\n2)sub\n3)mut\n4)div\n5)MODDIV \n\nenter the operation number you want to perform:");
     scanf("%d",&c);
     
     if (c == 1)
        {
          d=a+b;
          printf("\nthe sum of the numbers:%d",d);
        }
     
     else if (c==2)
     {
          d=a-b;
          printf("\nthe sub of the numbers:%d",d);
     }
     else if (c==3)
     {
          d=a*b;
          printf("\nthe mult of the numbers:%d",d);
     }
     else if (c==4)
     {
          d=a/b;
          printf("\nthe div of the numbers:%d",d);
     }
     else if (c==5)
     {
          d=a%b;
          printf("\nthe moddiv of the numbers:%d",d);
     }
     else 
     {
          printf("\nenter the operation shown above ");
     }
     printf("\nif u want to perform another operation or not \nenter:\n1 for once more \n0 for ending::");
     scanf("%d",e);
     
     }while (e==1);
     
     printf("\nend of the program;)");
     
}