#include<stdio.h>
int main()
{
    int age;
    printf("Enter age\n");
    scanf("%d",&age);
    if(age>18){
        printf("Eligible to cast your vote\n");
    }else
    {
        printf("Not eligible to cast your vote\n");
        printf("You would be able to cast your vote after %d year\n",18,age);
    }
    return 0;    
}
