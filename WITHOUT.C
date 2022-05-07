//functions without arguments and without returning values
#include<stdio.h>
#include<conio.h>
void add();
void main()
{
clrscr();
add();
getch();
}
void add()
{
float x,y,z;
printf("Enter X value");
scanf("%f",&x);
printf("Enter Y value");
scanf("%f",&y);
z=x+y;
printf("Sum of %f and %f values are %f",x,y,z);
}


