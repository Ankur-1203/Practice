#include<stdio.h>
int sum(int a,int b);

int main()
{
	int number1,number2,result;
	printf("Enter two numbers to add\n");
	scanf("%d%d",&number1,&number2);
	result=sum(number1,number2);
	printf("Sum is :%d\n",result);
	return 0;
}
int sum(int a,int b)
{
	return a+b;
}
