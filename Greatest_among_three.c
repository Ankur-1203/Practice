// largest among three numbers using nested if 

#include<stdio.h>
int main()
{
	int number1,number2,number3,big;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	if(number1>number2  && number1>number3) 
		big=number1;
	if(number2>number1 && number2>number3)
		big=number2;
	if(number3>number1 && number3>number2)
		big=number3;
	printf("Largest among three numbers is :%d",big);
	printf("\n");
	return 0;
}
