#include<stdio.h>

// // void a()
// // {
// //     printf("Hello");
// // }

// // void b()
// // {
// //     printf("Bye");
// //     a();
// // }

// int Add_two_numbers()
// {
//    int a,b,c;
//    char operator;
//    printf("Enter two numbers: ");
//    scanf("%d %d",&a,&b);
//    printf("Enter operation: ");
//    scanf("%c",&operator);
//    if (operator == '+')
//    {
//       c=a+b;
//       printf("%d",c);
//    }
//    else if (operator == '-')
//    {
//       c=a-b;
//       printf("%d",c);
//    }
//    else if (operator == '*')
//    {
//       c=a*b;
//       printf("%d",c);
//    }
//    else if (operator == '/')
//    {
//       c=a/b;
//       printf("%d",c);
//    }
//    else if (operator == '%')
//    {
//       c=a%b;
//       printf("%d",c);
//    }
//    else
//    {
//       printf("Invalid");
//    }
// }

// int main()
// {
//     Add_two_numbers();
//     return 0;
// }

int a,b;
int add_two_numbers(int a, int b)
{
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   return a+b;
}
int main()
{
   int total = add_two_numbers(a,b);
   printf("The sum is %d",total);
   return 0;
}
