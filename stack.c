#include<stdio.h>
#define n 5
int stack[n];
int top=-1;

int full()
{
    if(top==n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int empty()
{
    if(top<0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push()
{
    int itm;
    printf("\t\tEnter the elements in stack not more than(%d):",n);
    scanf("%d",&itm);
    if(full())
    {
        printf("\n\t------Stack overflow------\n");
    }
    else
    {
        top++;
        stack[top]=itm;
    }
}
void pop()
{
    int itm;
    if(empty())
    {
        printf("\n\t------Stack underflow------\n");
    }
    else
    {
        itm=stack[top];
        printf("\n\t\tDeleted item:%d", itm);
        top--;
    }
}
void display()
{
    int i;
    if(empty())
    {
        printf("\n\t------Stack underflow------\n");
    }
    else
    {
        printf("\t\tThe Entered Element Is:");
        for ( i = 0; i<=top; i++)
        {
            printf("\t\t%d\n",stack[i]);
        }
        
    }
}

int main()
{
    int choice;

    while(choice!=4)
    {
        printf(" \n1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n \t\tEnter Your Choice::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;

            case 2:pop();
            break;

            case 3:display();
            break;

            case 4:
            break;
        }
    }
}