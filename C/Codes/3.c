#include<stdio.h>
int main()
{
    
    int r;
    float circum=0,area=0;
    printf("enter the radius of circle=");
    scanf("%d",&r);
    circum=2*3.14*r;
    area=3.14*r*r;
    printf("circumference of circle=%.2f %.2f",circum,area);
    //printf("\narea of circle=%.2f",area);
    return 0;
    }