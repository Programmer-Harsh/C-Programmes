#include<stdio.h>
void main()
{
    int r,c;
    printf("\nEnter the number of rows = ");
    scanf("%d",&r);
    printf("\nEnter the number of column = ");
    scanf("%d",&c);
    int a[r][c];
    
    printf("\nEnter the elements of first matrix.......");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter the number a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe entered number of first matrix is.....\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int b[r][c];
    printf("Enter the elements of second matrix........");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nenter the number b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nentered number of second matrix is........\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int d[r][c];
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nthe final matrix is...............\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t%d\t",d[i][j]);
        }
        printf("\n");
    }

}
