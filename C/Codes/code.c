// #include <stdio.h>

// int reverse(int n) {
//     int rev = 0;
//     while (n > 0) {
//         rev = rev * 10 + (n % 10);
//         n /= 10;
//     }
//     return rev;
// }

// int main() {
//     int t, n, sum, count, i, j;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++) {
//         scanf("%d", &n);
//         sum = 0;
//         count = 0;
//         while (n > 0) {
//             sum += (n % 10);
//             n /= 10;
//             count++;
//         }
//         if (count != 10) {
//             printf("invalid\n");
//             continue;
//         }
//         int rev = reverse(sum);
//         if (rev == sum) {
//             printf("palindrome\n");
//         } else {
//             printf("not palindrome\n");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int reverse(int n) {
//     int rev = 0;
//     while (n > 0) {
//         rev = rev * 10 + (n % 10);
//         n /= 10;
//     }
//     return rev;
// }

// int main() {
//     int t, n, sum, count, i, j;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++) {
//         scanf("%d", &n);
//         sum = 0;
//         count = 0;
//         int has_zero = 0; // flag to check if number contains zero
//         while (n > 0) {
//             int digit = n % 10;
//             if (digit == 0) {
//                 has_zero = 1;
//                 break;
//             }
//             sum += digit;
//             n /= 10;
//             count++;
//         }
//         if (has_zero || count != 10) {
//             printf("invalid\n");
//             continue;
//         }
//         int rev = reverse(sum);
//         if (rev == sum) {
//             printf("palindrome\n");
//         } else {
//             printf("not palindrome\n");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int t, a[100], b[100], i, j;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < t; i++)
//     {
//         int sum = 0, count = 0, num = a[i];
//         int contains_zero = 0;
//         while (num > 0)
//         {
//             int digit = num % 10;
//             if (digit == 0) {
//                 contains_zero = 1;
//                 break;
//             }
//             sum += digit;
//             num /= 10;
//             count++;
//         }
//         if (count != 10 || contains_zero) {
//             printf("invalid\n");
//         } else {
//             int reverse_sum = 0, temp = sum;
//             while (temp > 0) {
//                 int rem = temp % 10;
//                 reverse_sum = reverse_sum * 10 + rem;
//                 temp /= 10;
//             }
//             if (reverse_sum == sum) {
//                 printf("palindrome\n");
//             } else {
//                 printf("not palindrome\n");
//             }
//         }
//     }
//     return 0;
// }
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
    {   
        count=0;
        sum=0;
        count1=0;
        while (a[i]>0)
        {
            int digit=a[i]%10;
            sum+=digit;
            a[i]=a[i]/10;
            count++;
            if (digit==0 && count > 1) // add check to skip leading 0
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
    }
    return 0;
}




