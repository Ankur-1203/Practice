//program to understand Prefix and Posfix Increment/Decrement.
#include<stdio.h>
int main()
{
    int x=3;
    printf("Prefix Increment/Decrement\n");
    printf("x=%d\t\t",x);
    printf("x=%d\t\t",++x);//first incremented and then printed
    printf("x=%d\t\t",x);
    printf("x=%d\t\t",--x);//first decremented and then printed 
    printf("x=%d\t\t\n",x);
    printf("Postfix Increment/Decrement\n");
    printf("x=%d\t\t",x);//x=3
    printf("x=%d\t\t",x++);//first Printed and then Incremented
    printf("x=%d\t\t",x);
    printf("x=%d\t\t",x--);//first Printed and then Decremented 
    printf("x=%d\t\t",x);
    return 0;
}
