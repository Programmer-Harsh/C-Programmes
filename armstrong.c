#include<stdio.h>
int main()
{
int a,b,add,temp;
add=0;

printf("enter your number:");
scanf("%d",&a);        //given number = a//
temp=a;
while (b>0)
{
b=a%10;
add=add+(b*b*b);
a=a/10;
}
if(temp==add)
printf("this is armstrong number");
else
printf("this is not armstrong number");
}
