#include<stdio.h>

int p=10;
int u=5,o=10;
void f1()
{
    auto int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    {
        float y;
        printf("Enter a number: ");
        scanf("%f",&y);
        printf("%d\n",x);
        printf("%f\n",y);
        {
            int v=1;
            printf("%d\n",v);
            {
                extern int p;
                printf("%d",p);
                printf("1 has been printed. Now a sequence of numbers from 0-10 will begin\n");
            }
        }
        static int a;
        while (a<=10)
        {
            printf("%d\t",a);
            a++;
        }
        
    }
    printf("%d",p);
}

void f2()
{
    printf("%d ",p);
    static int a;
    int b=0;
    a++;
    b++;
    printf("%d %d\n",a,b);
}
int f3()
{
   return u+o;
}
int main()
{
    printf("%d\n", f3());
    f2();
    f2();
    f2();
    f1();
    printf("\n");
    return 0;
}

