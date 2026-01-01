#include<stdio.h>
float a = 10, b = 5,c;
float add();
float subtract();
float division();
float multiply();

float add()
{
    c = a+b;
    printf("The sum of %f and %f is %f\n",a,b,c);
    return c;
}
float subtract()
{
    c = a-b;
    printf("The subtraction of %f and %f is %f\n",a,b,c);
    return c;
}
float division()
{ 
    c = a/b;    
    printf("The division of %f and %f is %f\n",a,b,c);
    return c;
}
float multiply()
{ 
    c = a*b;
    printf("The multiplication of %f and %f is %f\n",a,b,c);
    return c;
}
int main()
{
    add();
    subtract();
    division();
    multiply();
    return 0;
}
