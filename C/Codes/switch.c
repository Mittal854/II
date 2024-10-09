// #include<stdio.h>
// int main()
// {
//     int op;
//     printf("Who is prime minister of india");
//     printf("\n1)Narendra Modi\n2)Pranab Mukerjii\n3)Amit Shah\n4)Rahul Ganndhi");
//     printf("\nenter your ans: ");
//     scanf("\n%d",&op);
//     switch(op){
//         case 1:
//             printf("Correct ans");
//             break;
//         case 2:
//             printf("incorect ans");
//             break;
//         case 3:
//             printf("incorect ans");
//             break;  
//         case 4:
//             printf("incorect ans");
//             break; 
//         default:
//             printf("Invalid choice");
//             break;
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a<0)
    {
        printf("invalid age");
    }
    else if (a>=0 && a<=18)
    {
        printf("minor");
    }
    else if (a>=19 && a<=60)
    {
        printf("adult");
    }
    else if (a>60)
    {
        printf("senior citizen");
    }
    return 0;
}