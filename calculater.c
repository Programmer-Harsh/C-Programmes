#include<stdio.h>
int main()
{    //choice//
char ch;
int a,b,c,d,e;

printf("1..calculator\n");
printf("2..interchange\n");
printf("3..comparision\n");
printf("4..area\n");
printf("5..perimeter\n");

printf("wht do you want to use::");
scanf("%d",&d);
         //for calculator//
if (d==1)
{
printf("enter the first number::");
scanf("%d",&a);

printf("enter the second nmber::");
scanf("%d",&b);

printf("enter your choice::");
scanf("%s",&ch);

switch(ch)
{
    case'+':
        c=a+b;
        printf("%d + %d = %d",a,b,c);
        break;
    
    case'-':
        c=a-b;
        printf("%d - %d = %d",a,b,c);
        break;
    
    case'*':
        c=a*b;
        printf("%d * %d = %d",a,b,c);
        break;

    case'/':
        c=a/b;
        printf("%d / %d = %d%0.3f",a,b,c);
        break;

    default:
        printf("invalid choice.....");
        break;
}
}
        //for interchnge//
else if (d==2)          
{ 
printf("enter the number of digit::");
scanf("%d",&e);
if(e==2)
{
printf("enter the value of a:");
scanf("%d",&a);

printf("enter the value of b:");
scanf("%d",&b);

c=b;
b=a;
a=c;

printf("the value of a is:%d",a);
printf("\nthe value of b is:%d",b);
}

else if(e==3)
{
printf("enter the value of a:");
scanf("%d",&a);

printf("enter the value of b:");
scanf("%d",&b);

printf("enter the value of c:");
scanf("%d",&c);

d=a;
a=b;
b=c;
c=d;

printf("after the swapping the value is %d\n,%d\n,%d\n",a,b,c);
}

else
printf("error...");
}
        //comparision//
else if(d==3)
{
printf("enter number of digits::");
scanf("%d",&e);

if(e==2)
{
    printf("enter the value of a::");
    scanf("%d",&a);

    printf("enter the value of b::");
    scanf("%d",&b);

    if(a>b)
    printf("a is greater than b");
    else if(b>a)
    printf("b is greater than a");
    else if(a==b)
    printf("both are equal");
    else
    printf("error");

}
else if(e==3)
{
    printf("enter the value of a::");
    scanf("%d",&a);

    printf("enter the value of b::");
    scanf("%d",&b);

    printf("enter the value of c::");
    scanf("%d",&c);

    if(b>a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a>c)
    {
        printf("%d is greater than other two numbers",a);
    }
    else
        printf("%d is greater than other two numbers",c);
}
else
printf("error...");
}
        //area//                                                                              
else if(d==4)
{
    printf("1..circle");
    printf("2..rectangle");
    printf("3..square");
    printf("enter your choice..");
    scanf("%d",&e);

    if(e==1)
    {
        printf("enter the radii");
        scanf("%d",&b);

        c=(22/7)*b*b;

        printf("area of cicle is:%d",c);        
    }

    else if(e==2)
    {
        printf("enter the lenght of rectangle");
        scanf("%d",&a);

        printf("enter the breadth of the rectangle");
        scanf("%d",&b);

        c=a*b;

        printf("area of rectangle is %d",c);
    }

    else if(e==3)
    {
        printf("enter the side of square::");
        scanf("%d",&a);

        c=a*a;

        printf("area of square is %d",c);
    }
    else
    printf("error");
}
    //perimeter//
else if(d==5)
{
    printf("1..circle");
    printf("2..rectangle");
    printf("3..square");
    printf("enter your choice");
    scanf("%d",&e);
    if(e==1)
    {
        printf("enter the radii");
        scanf("%d",&c);

        b=2*3.17*c;

        printf("%d",c);
    }
    else if(e==2)
    {
        printf("enter the lenght");
        scanf("%d",&a);

        printf("enter the breadth");
        scanf("%d",&b);

        c=2*(a+b);

        printf("%d",c);
    }
    else if(e==3)
    {
        printf("enter the side");
        scanf("%d",&a);

        b=4*a;

        printf("%d",b);
    }
    else
    printf("error");
}
else
printf("invalid choice");

}


















