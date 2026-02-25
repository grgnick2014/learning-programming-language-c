#include<stdio.h>
#include<math.h>

   float sigmoid(float x) 
   {
    return 1.0 / (1.0 + exp(-x));
   }

int main()
{
   int i;
   float input1, input2;
   printf("Enter answer for question 1(1,2,3): ");
   scanf("%f",&input1);
   printf("Enter answer for question 2(1,2,3): ");
   scanf("%f",&input2);
   float target = 0.8;
   float w1=0.5,w2=0.5,bias=0.1;
   float rate = 0.01;
   for (i = 0; i < 1000; i++)
   {
      float prediction = sigmoid(input1*w1 + input2*w2+bias);
      float error = target - prediction;

      w1 = w1 + rate * error * input1;
      w2 = w2 + rate * error * input2;
      bias = bias + rate * error;
   }
   printf("\nTraining complete for AI\n");
   printf("\nPrevious w1: 0.5\nPrevious w2: 0.5\n");
   printf("Updated weights: w1=%.3f, w2=%.3f, bias=%.3f\n", w1, w2, bias);
   printf("Prediction after training: %.3f\n", sigmoid(input1*w1 + input2*w2 + bias));

   return 0;
}

