#include<stdio.h>
#include<math.h>

int main()
{
    float b,c,u,a,t,p,s=0,T=0,H=0,V=0;
    printf("enter the value of u=");
    scanf("%f",&u);
    printf("enter the value of a=");
    scanf("%f",&a);
    printf("enter the value of t=");
    scanf("%f",&t);
    printf("enter the value of b=");
    scanf("%f",&b);
    printf("enter the value of c=");
    scanf("%f",&c);
    printf("enter the value of p=");
    scanf("%f",&p);
    V=u+a*t;
    s=u*t+0.5*a*t*t;
    T=2*a+sqrt(b+9*c);
    H=sqrt(b*b+p*p);
    printf("V=%.2f",V);
    printf("S=%.2f",s);
    printf("T=%.2f",T);
    printf("H=%.2f",H);
    return 0;
}