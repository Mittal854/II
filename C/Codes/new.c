/*#include<stdio.h>
int main(){
    int id,marks;
    float percentage;
    printf("Enter id=");
    scanf("%d",&id);
    printf("Enter marks=");
    scanf("%d",&marks);
    printf("Enter percent=");
    scanf("%f",&percentage);
    printf("Roll=%d\nMarks=%d\nPercentage=%.2f%%",id,marks,percentage);
    return 0;
}
#include<stdio.h>
int main()
{
    int a=12,b=123,c=1234;
    printf("%d\n%d\n%d",a,b,c);
    printf("\n%4d\n%4d\n%4d",a,b,c);
    return 0;
}
#include<stdio.h>
int main(){
    float a,b,c;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("a=%.6f\nb=%.6f\nc=%.6f",a,b,c);
    printf("\na=%10.2f\nb=%10.2f\nc=%10.2f",a,b,c);
    return 0;
}
#include<stdio.h>
int main(){
    char ch='C';
    printf("Language-\"%c\"",ch);
    return 0;
}
#include<stdio.h>
int main(){
    int physics,maths,chemistry,english,total=0;
    float average=0;
    printf("physics=");
    scanf("%d",&physics);
    printf("maths=");
    scanf("%d",&maths);
    printf("chemistry=");
    scanf("%d",&chemistry);
    printf("english=");
    scanf("%d",&english);
    total=physics+maths+chemistry+english;
    average=(physics+maths+chemistry+english)/4;
    printf("total marks=%d \naverage marks=%.2f",total,average);
    return 0;
    
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("(%d + %d)(%d + %d)=%d*%d + %d*%d + 2*%d*%d",a,b,a,b,a,a,b,b,a,b);
    return 0;
}
#include<stdio.h>
int main()
{
    int side,sq,cube;
    printf("side=");
    scanf("%d",&side);
    sq=side*side;
    cube=6*side*side;
    printf("square=%d \ncube=%d",sq,cube);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,max=0;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    printf("%d",max);
    return 0;
}
#include<stdio.h>
int main()
{
    int x=5;
    if(x<1)
    printf("hello");
    printf("hi");
    return 0;
}
#include<stdio.h>
int main()
{
    int x=5;
    printf("%d%d%d%d%d",x++,x++,x++,x++,x++);
    return 0;
}
#include<stdio.h>
int main()
{
    char lc,uc;
    int ascii;
    printf("lower case=");
    scanf("%c",&lc);
    ascii=lc;
    uc=lc-32;
    printf("%c",uc);

    return 0;

}
#include<stdio.h>
int main()
{
    int salary,gs=0;
    printf("enter the salary=");
    scanf("%d",&salary);
    if (salary<=10000)
    {
        gs=salary+0.2*salary+0.8*salary;
    }
    else if (salary>10000 && salary<=20000)
    {
        gs=salary+.25*salary+.90*salary;
    }
    else if (salary>20000)
    {
        gs=salary+.3*salary+.95*salary;
    }
    printf("gross salary=%d",gs);
    return 0;
}
#include<stdio.h>
int main()
{
    int x;
    for (x=2;x<=10;x=x+2)
    {
        printf("%d\n",x);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a=2,b=5;
    (a&b)?printf("false\n"):printf("true\n");
    (a&&b)?printf("false"):printf("true");
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i=0,p=0;
    printf("enter the no=");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        p=n*i;
        printf("%dx%d=%d\n",n,i,p);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,s;
    for (i=1;i<=10;i++)
    {
        s=s+i;
    }
    printf("sum of 10 n.n=%d",s);
    return 0;

}
#include<stdio.h>
int main()
{
    int n,i,s;
    printf("enter the no of terms=");
    scanf("%d",&n);
    if (n>0 && n<=10)
    {
        for (i=1;i<=n;i++)
        {
            s=s+i;
            printf("sum=%d\n",s);
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    if(printf("html"))
    {
        printf("coding");
    }
    else{
        printf("invalid");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,s=0,a=0,i,b;
    printf("no of enteries=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("enter the no=");
        scanf("%d",&b);
        s=s+b;
    }
    a=s/n;
    printf("sum=%d\naverage=%d",s,a);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    printf("enter the no of terms=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
        s=s+2*i+1;
        
    }
    printf("%d",s);
    return 0;

}
#include<stdio.h>
int main()
{
    int i=10;
    while(i>0)
    {
        printf("%d\n",i);
        i=i-2;
    }
    return 0;

}
#include<stdio.h>
int main()
{
    int j=1;
    while(j+=2,j<=10)
    {
        printf("%d",j);
    }
    printf("%d",j);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,f,l,s;
    printf("enter the no=");
    scanf("%d",&n);
    l=n%10;
    while (n>=10)
    {
        n=n/10;
    }
    f=n;
    s=l+f;
    printf("sum=%d",s);
    return 0;
}*/
#include<stdio.h>
int main()
{
    
}