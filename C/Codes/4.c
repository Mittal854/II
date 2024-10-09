#include<stdio.h>
int main()
{   
    int a,b,add=0,diff=0,mul=0,div=0;
    printf("ente rthe first no.=");
    scanf("%d",&a);
    printf("enter the second no.=");
    scanf("%d",&b);
    add=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    printf("sum of 2 nos=%d",add);
    printf("\ndifference of 2 nos=%d",diff);
    printf("\nmultipication of 2 nos=%d",mul);
    return 0;
}