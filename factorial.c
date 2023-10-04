//factorial//
#include<stdio.h>
int main()
{
int i=1,num,f=1;

printf("\nenter the number");
scanf("%d",&num);

if(num>0)
{
while (i<=num)
{
    f=f*i;
    i++;
}
printf("the factorial of %d is=%d",num,f);
}
else
printf("do not enter non positive integer");
}