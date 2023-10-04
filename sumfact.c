#include <stdio.h>
int main()
{
    int i, fact, num;
    float sum = 1.0;

    printf("enter a number:");
    scanf("%d", &num);

    if (num == 1)
        printf("1");
    else
    {
        printf("(1/1)");

        for (i = 2, fact = 1; i <= num; i++)
        {
            fact = (fact * i);
            sum = sum + (1.0 / fact);
            printf("+(%d/%d)", i, fact);
        }
        printf("=%f", sum);
        printf("\nthe factorial is::%d", fact);
    }
}