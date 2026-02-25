#include<stdio.h>
#include<stdlib.h>

/*Program
int main()
{
   printf("Bye");
   return 0;
}
*/

// int main()
// {
//    int i,j;
//    for (i = 1; i <= 5; i++)
//    {
//       for (j = 1; j <= 5; j++)
//       {
//          if (j<=6-i)
//          {
//             printf("*"); 
//          } 
//          else
//          {
//             printf("");
//          }
//       }printf("\n");
//    }
//    return 0;
// }

     //j
/* 12345
  1*****
  2****
i 3***
  4**
  5* 
*/

// int main()
// {
//    int a;
//    printf("Enter a number(1-5): ");
//    scanf("%d",&a);
//    switch(a)
//    {
//    case 1:
//       printf("VEry HAPPY");
//       break;
//    case 2:
//       printf("Happy");
//       break;
//    case 3:
//       printf("NOrmal");
//       break;
//    case 4:
//       printf("Sad");
//       break; 
//    case 5:
//       printf("VERY Sad");
//       break;     
//    default:
//       break;
//    }
// }

// int main()
// {
//    int *ptr;
//    printf("Bytes is %zu",sizeof(ptr));
//    return 0;
// }


// void f1()
// {
//   printf("Hello");
//   f1();
//   printf("Bye");
// }
// int main()
// {
//    f1();
//    return 0;
// }


// void f1()
// {
//   int a;
//   printf("Enter a number: ");
//   scanf("%d",&a);
//   if(a>0)
//     f1();
//   printf("%d",a);
// }
// int main()
// {
//    f1();
//    return 0;
// }


// int sum(int n)
// {
//   printf("Enter number: ");
//   scanf("%d",&n);
//   if (n==1)
//   {
//     return 1;
//   }
//   return n+sum(n-1);
  
// }
// int main()
// {
//   sum();
//   return 0;
// }



int main()
{
    int *ptr = NULL;
    *ptr = 5;   // crash here
    return 0;
}
