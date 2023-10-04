#include<stdio.h>
void main()
{
    int base,exponent;
    int power=1;
    int i;

    printf("enter the base number");
    scanf("%d",&base);

    printf("enter the exponent number");
    scanf("%d",&exponent);

    for(i=1;i<=exponent;i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d",base,exponent,power);

}