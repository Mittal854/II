/*#include<stdio.h>
int main()
{
    int a=1;
    printf("%i %d",a,a);
    return 0;
}*/
// #include <stdio.h>

// int main()
// {
//     int a=0;
    
//     a=5||2|1;
//     printf("%d",a);
    
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//        int n,i,j;
//        printf("Enter any no.=");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//         for(j=1;j<=10;j++)
//         {
//             printf("%d\t",i*j);
//         }
//         printf("\n");
//        }
//        return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("no.=");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(int s=1;s<=n-i;s++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c",&ch);
//     if (ch=='a' || ch=='e'|| ch=='i' || ch=='o'||ch=='u' )
//     {
//         printf("vowel");
//     }
//     else{
//         printf("consonant");
//     }
// }
#include<stdio.h>
int main()
{
    int arr[100],arr2[100],a,b,flag;
    scanf("%d %d",&a,&b);
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    if (a!=b)
    {
        printf("invalid");
    }
    else{
        for (int i=0;i<a;i++)
        {
            for (int j=i+1;j<a;j++)
            {
                if (arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for (int i=0;i<b;i++)
        {
            for (int j=i+1;j<b;j++)
            {
                if (arr2[i]>arr2[j])
                {
                    int temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                }
            }
        }
        for (int i=0;i<a;i++)
        {   flag=1;
            if (arr[i]!=arr2[i])
            {
                flag=0;
            }

        }
        if (flag==0)
        {
            printf(" not same");
        }
        else
        {
            printf("same");

        }

    }

}