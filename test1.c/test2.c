#include<stdio.h>
#include<string.h>
// int a,b;
// void printing(void);
// void iftwo(void);
// void printing()
// {
//    printf("Enter two numbers: ");
//    scanf("%d %d",&a,&b);
// }
// void iftwo()
// {
//    if (a>b)
//    printf("%d is greater than %d!",a,b);
//    else if (a<b)
//    printf("%d is greater than %d!",b,a);
//    else
//    printf("They are same");
// }
// int main()
// {
//    printing();
//    iftwo();
//    return 0;
// }

// int main()
// {
//     unsigned long long n;
//     unsigned long long i,factorial = 1;
//     printf("Enter a number: ");
//     scanf("%llu",&n);
//     for(int i = 1;i<=n;i++)
//     {
//         factorial *= i;
//     }
//     printf("The factorial of %llu is %llu",n,factorial);
//     return 0;
// }

// int main()
// {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     if (a%2==0)
//     printf("It is even");
//     else
//     printf("It is odd");
//     return 0;
// }

// int main()
// {
//     float rupees,a,b;
//     rupees = 118.22;
//     printf("Enter the amount of pounds to be converted to rupees:  ");
//     scanf("%f",&a);
//     b = a*rupees;
//     printf("%f",b);
//     return 0;
// }

// int main()
// {
//     int a,i;
//     a=1;
//     i=1;
//     for(a=1;a<=7;a++)
//     {
//         for(i=1;i<=5;i++)
//         {
//             if (i<=6)
//             printf("*");
//             else
//             printf(" ");
//         }
//     }
//     return 0;
// }

// int main()
// {
//     char str[10]={'D','e','e','p','a','k'};
//     printf(str);
//     return 0;
// }

// int main()
// {
//     char str[10]={'H','e','l','l','o'};
//     int i;
//     for(i=0;str[i];i++)
//     printf("%c",str[i]);
//     return 0;
// }
// int a,b,c;
// int add()
// {
//     c = a+b;
//     printf("%d",c);
// }
// int sub()
// {
//     c = a-b;
//     printf("%d",c);
// }
// int multiply()
// {
//     c = a*b;
//     printf("%d",c);
// }
// int divide()
// {
//     c = a/b;
//     printf("%d",c);
// }
// int main()
// {
//     int q;
//     printf("Enter two number: ");
//     scanf("%d %d",&a,&b);
//     printf("Enter what would you like to do with numbers(add,sub,multiply,divide)");
//     scanf("%s",&q);
//     if (q == 'add')
//     add();
//     else if (q == 'sub')
//     sub();
//     else if (q == 'multiply')
//     multiply();
//     else
//     divide();
//     return 0;
// }

int f1()
{
    char str[3][20]={"London\n","Delhi\n","Washington\n"};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s",str[i]);
    }
}
int main()
{
    f1();
    return 0;
}