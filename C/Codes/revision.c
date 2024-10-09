#include<stdio.h>
int main()
{
    int t,a[1000],b[1000],c[1000],d[1000],e[1000],sum,count,rev,count1,temp;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }   
    for (int i=0;i<t;i++)
    {   count=0;
        sum=0;
        count1=0;
        while (a[i]>0)
        {
            int digit=a[i]%10;
            sum+=digit;
            a[i]=a[i]/10;
            count++;
            if (digit==0)
            {
                count1++;
            }
        }
        b[i]=sum;
        c[i]=count;
        e[i]=count1;
    }
    for (int i=0;i<t;i++)
    {
        rev=0;
        count=0;
        temp=b[i];
        while (temp>0)
        {
            int digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
            
        }
        d[i]=rev;  
    }
    for (int i=0;i<t;i++)
    {
        if (c[i]!=10 || e[i]>0)
        {
            printf("invalid\n");
        }
        else{
            if (b[i]==d[i])
            {
                printf("palindrome\n");
            }
            else{
                printf("not palindrome\n");
            }

        }
        //if ((c[i] == 1 && e[i] == 0) || (c[i] == 10 && e[i] == 0))
        // {
        //     if (b[i]==d[i])
        //     {
        //         printf("palindrome\n");
        //     }
        //     else{
        //         printf("not palindrome\n");
        //     }
        // }
        // else
        // {
        //     printf("invalid\n");
        // }
    }
    return 0;
}