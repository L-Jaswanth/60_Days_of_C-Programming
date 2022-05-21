#include <stdio.h>

struct book{
    char book_name[50];
    char publisher[50];
    float cost;
};

int main()
{
    struct book b1[20];
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("\nEnter the name of the book%d ::",(i+1));
        scanf("%s",b1[i].book_name);
        printf("Enter the publisher name%d::",(i+1));
        scanf("%s",b1[i].publisher);
        printf("Enter the cost of the book%d ::",(i+1));
        scanf("%f",&b1[i].cost);
    }
    
    for(i=0;i<4;i++)
    {
        printf("\nBook%d :: %s",(i+1),b1[i].book_name);
        printf("\nPublisher%d :: %s",(i+1),b1[i].publisher);
        printf("\ncost%d :: %f",(i+1),b1[i].cost);
    }
    return 0;
}


