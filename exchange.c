#include<stdio.h>
int main()
{
int a,b,c;
printf("enter your first number:");
scanf("%d",&a);

printf("enter your second number:");
scanf("%d",&b);

c=b;
b=a;
a=c;

printf("value of a is:%d",a);
printf("\nvalue of b is:%d",b);
    
}