#include<stdio.h>
int main()
{
int value=1,num,sum=0;

printf("enter your number");
scanf("%d",&num);

while (num!=0)
{
    value=num%10;
    sum=sum+value;
    num=num/10;
}
printf("%d",sum);
}