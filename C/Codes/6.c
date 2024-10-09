//temporary variable
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first no.=");
    scanf("%d",&a);
    printf("enter the second no=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("first no. is =%d \nsecond no. is =%d",a,b);
    return 0;
}*/
//without temporary variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first no.=");
    scanf("%d",&a);
    printf("enter the second no=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("first no. is =%d \nsecond no. is =%d",a,b);
    return 0;

}