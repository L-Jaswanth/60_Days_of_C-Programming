#include <stdio.h>

int main()
{
    int mat,che,phy,eng,ip;
    
    printf("\nenter the marks per 100 in maths :");
    scanf("%d",&mat);
    
    printf("\nenter the marks per 100 in phycise :");
    scanf("%d",&phy);
    
    printf("\nenter the marks per 100 in chemistry :");
    scanf("%d",&che);
    
    printf("\nenter the marks per 100 in english :");
    scanf("%d",&eng);
    
    printf("\nenter the marks per 100 in ip :");
    scanf("%d",&ip);
    
    int total;
    total=mat+che+phy+ ip+eng;
    float per;
    per=total/5;
    
    printf("\nthe total marks you obtained = %d",total);
    printf("\nthe percentage you got = %f",per);
    
    if (per>=90)
    {
         printf("\nyou have got A+ grade");
     }
     else if (per>=80)
     {
          printf("\nyou have got B+ grade");
     }
     else if(per>=70)
     {
          printf("\nyou have got C+ grade");
     }
     else if(per>=60)
     {
          printf("\nyou have got D+ grade");
     }
     else if(per>=50)
     {
          printf("\nyou have got E+ grade");
     }
     else
     {
          printf("\nyou have FALIED");
     }
    

    return 0;
}
