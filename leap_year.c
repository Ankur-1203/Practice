#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year to check for leap year\n");
    scanf("%d",&year);
    if((year%4)==0)
        printf("Leap year\n");
    else if((year%100)==0)
        printf("Not a leap year");
    else if((year%400)==0)
        printf("Leap year");
    else
        printf("Not a leap year");
    return 0;    
}
