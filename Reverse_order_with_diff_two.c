// Print number in reverse order with difference of two

#include<stdio.h>
int main()
{
   int n,i=0;
   printf("Please enter any number\n");
   scanf("%d",&n);
   printf("Reverse order is\n");
   while(i<=n)
   	{
	   printf("%d\t",n);
   	   n=n-2;
   	}
   printf("\n");
return 0;	   
		 
}
