//Print number from 1 to user input using while loop
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Please enter any number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
printf("\n");	
return 0;
}


