#include<stdio.h>
int main()
{
   int number1;
   printf ("Please enter a number\n");
   scanf("%d",&number1);
   if(number1%2==0)
      printf("%d is Even\n",number1);
   else
      printf("%d is odd",number1);
   return 0;
}
      
