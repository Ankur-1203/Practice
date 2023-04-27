#include<stdio.h>
int main()
{
   int number1;
   printf ("Please enter a number\n");
   scanf("%d",&number1);
   if(number1>0)
      printf("Positive\n",number1);
   else
      printf("Negative\n",number1);
   return 0;
}
