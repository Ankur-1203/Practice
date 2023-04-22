#include<stdio.h>
int main()
{
    int number[100],i,size,min;
    printf("Please enter size of an array\n");
    scanf("%d",&size);
    printf("Please enter numbers\n");
    for(i=0;i<=size;i++)
    {
        scanf("%d",&number[i]);
    }
    min=number[0];
    for(i=1;i<=size;i++)
    {
        if(min>number[i])
        {
            min=number[i];
        }
    }
    printf("Smallest number in array is :%d",min);
    return 0;
}S
