/*#include<stdio.h>
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
int main(){
    int month,week,day,days;
    printf("enter the no of days=");
    scanf("%d",&days);
    month=days/30;
    week=(days%30)/7;
    day=(days%30)%7;
    printf("month=%d\nweek=%d\nday=%d",month,week,day);
    return 0;

}
#include<stdio.h>
int main()
{
    int tm,h,m;
    printf("total min=");
    scanf("%d",&tm);
    h=tm/60;
    m=tm%60;
    printf("hours=%d\nmin=%d",h,m);
    return 0;
}
#include<stdio.h>
int main()
{
    int a=10 ,b=20,c=30;
    if(c>b>a)
    {
        printf("True");

    }
    else{
        printf("False");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age=");
    scanf("%d",&age);
    if (age>=18)
    {
         if (age>50)
        {
            printf("not eligible");
        }
        else
        {
            printf("eligible");
        }
    }
    else
    {
        printf("not eligible");
        
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int percent;
    printf("enter the percent=");
    scanf("%d", &percent);
    
    if (percent<=100 && percent >90)
    {
        printf("A");
    }
    else if (percent<=90 && percent >70)
    {
        printf("B");
    }
    else if (percent<=70 && percent >60)
    {
        printf("C");
    }
        
    else if (percent<=60)
    {
        printf("D");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char a_;
    printf("Enter the char=");
    scanf("%c",&a_);
    if (a_>=97 && a_<=122)
    {
        printf("Smaller case");
    }
    else if (a_>=65 && a_<=91)
    {
        printf("Upper case");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the nos=");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("a is greatest");
        }
        else
        {
            printf("c is greatest");
        }
    }
    else
    {
        if (b>c)
        {
            printf("b is greatest");
        }
        else{
            printf("c is greatest");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int r500,r200,r100,r50,r1,amt;
    printf("Enter the amount=");
    scanf("%d",&amt);
    r500=amt/500;
    amt=amt%500;
    r200=amt/200;
    amt=amt%200;
    r100=amt/100;
    amt=amt%100;
    r50=amt/50;
    amt=amt%50;
    r1=amt/1;
    printf("500=%d\n200=%d\n100=%d\n50=%d\n1=%d",r500,r200,r100,r50,r1);
    return 0;
}
#include<stdio.h>
int main()
{
    int days;
    printf("enter the day=");
    scanf("%d",&days);
    switch(days)
    {
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturaday");
        break;
        default:
        printf("invalid");
        break;

    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
        printf("even");
        break;
        case 1:
        printf("odd");
        break;
    }
    return 0;
}
#include<stdio.h>
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
    case 'a': 
    case 'e': 
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int x=10, y=5;
    switch(x>y && x+y>0)
    {
        case 1:
        printf("hi");
        break;
        case 0:
        printf("hello");
        break;
        default:
        printf("bye");
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,oper=0;
    printf("enter the choice=");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("a,b=");
        scanf("%d %d",&a,&b);
        oper=a+b;
        printf("sum=%d",oper);
        break;
        case 2:
        printf("a,b=");
        scanf("%d %d",&a,&b);
        oper=a-b;
        printf("diff=%d",oper);
        break;
        case 3:
        printf("a,b=");
        scanf("%d %d",&a,&b);
        oper=a*b;
        printf("product=%d",oper);
        break;
        case 4:
        printf("a,b=");
        scanf("%d %d",&a,&b);
        oper=a/b;
        printf("div=%d",oper);
        break;
        default:
        printf("invalid");
        break;


    }
    return 0;
}        */
#include<stdio.h>
int main()
{
    int a;
    switch(a)
    {
        printf("apache");

    }
    printf("hero honda");
    return 0;
}