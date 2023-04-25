#include<stdio.h>
int main()
{
    int a=2,b=1,c,d;
    c=a<b;             //c=2<1 false then c=0;
    d=(a<b) && (c<b);  //(2<1) && (0<1) first statement false 2nd is true ,d=0 && 1 which is false,in AND operator if  both true then true 
    printf("c=%d,d=%d\n",c,d);  //   prints 0
    return 0;
}
