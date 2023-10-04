#include<stdio.h>
int main()
{
    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element of the array::\n",i);
        scanf("%d",&marks[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element of the arrray is::%d\n",i,marks[i]);
        
    }
    
}