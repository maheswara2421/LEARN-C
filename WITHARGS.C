//functions with arguments without returning values
#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
clrscr();
printf("Enter A value");
scanf("%d",&a);
printf("Enter B value");
scanf("%d",&b);
add(a,b); //actual arguments
getch();
}
void add(int x,int y)   //formal arguments
{
int z=x+y;
printf("Sum of %d and %d values are %d",x,y,z);
}


