#include<stdio.h>
void main()
{
    int num,i,sum=0,square;

    printf("enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        square=i*i;
        sum+=i*i;
    }

    printf("square is:: %d\n",square);
    printf("sum of square is %d",sum);


}