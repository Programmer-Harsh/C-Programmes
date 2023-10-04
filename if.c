#include<stdio.h>
int main()
{
int age;

printf("enter your age");
scanf("%d",&age);

if (age<<10)
{
    printf("you have entered your age is%d\n",age);
    printf("you can vote for childrens\n");
}    
else if (age>=18)              
{
    printf("you have entered your age is%d",age);
    printf("you can vote!!");
}
else (age==0);

   printf("error");

}















