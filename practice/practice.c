#include<stdio.h>
#include<string.h>

// void ai1()
// {
//     int En,Ma,Sc,Co;
//    int total;
//    float average;
//    printf("Enter marks for English, Maths, Science, Computing: ");
//    scanf("%d %d %d %d",&En,&Ma,&Sc,&Co);
//    total = En+Ma+Sc+Co;
//    average=total/4.0;
//    printf("Possibility of passing: %f",average);
// }

// // void str()
// // {
// //    char str[2];
// //    char YN;
// //    printf("Enter your name: ");
// //    gets(str);
// //    printf("Correct Name: %s\n",str);
// //    printf("Y/N\n");
// //    scanf(" %c",&YN);
// //    if (YN == 'Y')
// //    {
// //       printf("%s\n",str);
// //    }
// //    else if(YN == 'N')
// //    {
// //       printf("Incorrect Name\n");
// //    }
// //    else
// //    {
// //       printf("Invalid choice");
// //    }
// // }

// // void crash()
// // {
// //     crash();
// // }


// // void v()
// // {
// //     char str[5];
// //     int flag = 10;

// //     printf("Address of str  = %p\n", str);
// //     printf("Address of flag = %p\n", &flag);

// // }


// // void a()
// // {
// //     for(int i=0; i<1000000; i++)
// //    {
// //         printf("ERROR: SYSTEM FAILURE %d\n", i);
// //    }   
// //}

// void ai2()
// {
//     float input1,input2;
//     float w1=5,w2=2;
//     float bias=1,result;
//     float possibility;
//     printf("Enter marks of two subjects(Maths and Geography): \n");
//     scanf("%f %f",&input1,&input2);
//     result = (input1 * w1) + (input2 * w2) + bias;
//     possibility = result; 
//     if (possibility <= 30)
//     {
//         printf("%f has a low chance of passing\n",possibility);
//     }
//     else if (possibility <= 60)
//     {
//         printf("%f has a medium chance of passing\n",possibility);
//     }
//     else if (possibility <= 80)
//     {
//         printf("%f has a high chance of passing\n",possibility);
//     }
//     else if (possibility < 100)
//     {
//         printf("%f has a very high chance of passing\n",possibility);
//     }
//     else if (possibility >= 100)
//     {
//         printf("%f is a 100percent pass\n",possibility);
//     }
//     else
//     {
//         printf("Invalid choice\n");
//     }

// }

void ai3()
{
    int low = 1;
    int high = 1000;
    int guess;
    int feedback;
    int attempts = 0;
    
    printf("Think of a number between (0-1000)\n");

    while (low <= high)
    {
        guess = (low + high) / 2;
        attempts++;
        
        printf("Guesses: %d\n",guess);
        printf("Enter feedback(-1 = low, 0 = correct, 1 = high): \n");
        scanf("%d",&feedback);
        if (feedback == 0)
        {
            printf("Guessed in %d attempts\n",attempts);
        }
        else if (feedback == -1)
        {
            low = guess+1;
        }
        else if (feedback == 1)
        {
            high = guess-1;
        }
        else
        {
            printf("Invalid");
        }
        
        
    }
    
}
int main()
{
   //ai1();
   //str();
   //crash();
   //v();
   //ai2();
   ai3();
   return 0;
}





