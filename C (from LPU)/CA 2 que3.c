#include<stdio.h>

struct student
{
    char name[20];
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float sub6;
};

int main()
{
    struct student std[20];
    
    for(int i=1;i<=1;i++)
    {
        printf("\nEnter the name of the sudent[%d] :: ",i);
        scanf("%s",std[i].name);
        
        printf("\nEnter Marks in Six Subjects ::");
        for(int j=1;j<=1;j++)
        {
           printf("sub[%d]'s marks ::",j);
           scanf("%f",&std[i].sub[j]);
        }
        //scanf("%f %f %f %f %f %f",& std[i].sub1,&std[i].sub2,&std[i].sub3 ,&std[i].sub4,&std[i].sub5,&std[i].sub6);
    }
    
    printf("\n******  printing the data you entered ******* ");
    for(i=1;i<=1;i++)
    {
        printf("The name of the student%d  : %s",i,std[i].name);
        for(int j=1;j<=1;j++)
        {
           printf("sub[%d]'s marks :: %f",j,std[j].sub1);
        }
    }
    return 0;
}

