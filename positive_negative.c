#include<stdio.h>
int main()
{
   int number1;
   printf ("Please enter a number\n");
   scanf("%d",&number1);
   if(number1>0)
      printf("Positive\n");
   else
      printf("Negative\n");
   return 0;
}
