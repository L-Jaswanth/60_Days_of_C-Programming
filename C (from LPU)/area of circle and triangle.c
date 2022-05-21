#include <stdio.h>

#define PI 3.14

int main()
{
    int sel;
    printf("\ni) triangle (1) \nii) circle (2) \nselect the number you want to find the area-");
    scanf("%d",&sel);
    
    if (sel == 1)
    {
        double b,h,tri_area;
        printf("\nenter the base of the triangle :");
        scanf("%lf",&b);
        printf("\nenter the hight of the triangle :");
        scanf("%lf",&h);
        tri_area=0.5*b*h;
        printf("\nThe area of triangle is %lf",tri_area);
    }
    else if(sel == 2)
    {
        double r,cir_area;
        printf("\nenter the value radius of circle :");
        scanf("%lf",&r);
        cir_area=PI*r*r;
        printf("\nThe area of circle is %lf",cir_area);
    }
    else
    {
        printf("\nEnter a valid number");
    }
}