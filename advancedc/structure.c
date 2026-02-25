#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
    struct employee 
    {
        char id[50];
        char employeename[50];
        float salary;
    };
    struct employee a;
   printf("Enter employee name(intials or first name with last names first letter without space, example: NickG): ");
   scanf("%s",a.employeename);
   printf("Enter employees id: ");
   scanf("%s",&a.id);
   printf("Enter employees salary: ");
   scanf("%f",&a.salary);
   printf("************Employee details************\n");
   printf("%s\n%s\n%f",a.employeename,a.id,a.salary);
   return 0;
}

// void count()
// {
//    char str[50];
//    int i=0;
//    printf("Enter a word: ");
//    fgets(str,50,stdin);
//    while(str[i] != '\0')
//    {
//      if(str[i]=='a'||str[i]=='A'||
//         str[i]=='e'||str[i]=='E'||
//         str[i]=='i'||str[i]=='I'|| 
//         str[i]=='o'||str[i]=='O'||
//         str[i]=='u'||str[i]=='U')
//         {
//             printf("Your word has a vowel");
//             return;
//         }
//         i++;
//    }
//    printf("No vowels found");
// }  
// int main()
// {
//    count();
//    printf("\n");
//    return 0;
// }

// int main()
// {
//    int i = 1;
//    for(;;)
//    {
//       printf("Inf loop\n");
//    }
//    return 0;
// }


// int main()
// {
//    int a;
//    printf("Enter time: ");
//    scanf("%d",&a);
//    while (a>=0)
//    {
//       printf("%d...\n",a);
//       a--;
//       Sleep(1000);
//    }
//    printf("Time is up");
//    return 0;
// }

// int main()
// {
//    int a;
//    printf("Enter time: ");
//    scanf("%d",&a);
//    while (a>=0)
//    {
//       printf("%d...\n",a);
//       a--;
//       Sleep(1000);
//    }
//    printf("Time is up");
//    return 0;
// }
