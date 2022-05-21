#include<stdio.h>

struct company{
    char companyName[40]; ///40
    int phoneNumber; ///4
    float turnover; ///4

};

int main()
{
    struct company c1 = {"ABC",12425435,4356476.454}, c2[5]; /// c2 is str variable
    printf("Size of str is : %d",sizeof(c1));
    printf("\nSize of Array of str var is %d",sizeof(c2));

    printf("\nCompany name is : %s",c1.companyName);
    printf("\nPhone Number of the company is : %d",c1.phoneNumber);
    printf("\nTurnover of the company is : %f ",c1.turnover);

    ///to store and print the values of the structure array
}
