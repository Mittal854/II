#include<stdio.h>
int main()
{
   int i,q,p;
   int amt;
   printf("enter the item code::");
   scanf("%d",&i);
   printf("\nenter the quantity::");
   scanf("%d",&q);
   printf("\nenter the price::");
   scanf("%d",&p);
   amt=q*p;
   printf("\n                    --------------Shopping center----------\n ");
   printf("\n\n   s.no.     item code      quentity      price       total amount");
   printf("\n        1           %d",i);
   printf("          %d",q);
   printf("           %d",p);
   printf("              %d",amt);

    return 0;
}