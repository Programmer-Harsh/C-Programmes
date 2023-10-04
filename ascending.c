#include<stdio.h>
int main()
{
    int temp;
    int a[10];
    int i,j,min;

    for(i=0;i<10;i++)
    {
        printf("enter the numbewr");
        scanf("%d",&a[i]);
    }

    for(i=0;i<6;i++)
    {
        min=a[0];

        for(j=i+1;j<7;j++)
        {
            if(a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("%d",a[j]);
}