/*prg to print area of right angle triangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
float b;
float l,area;
clrscr();
printf("Enter length, breadth");
scanf("%f%f",&l,&b);
area=0.5*l*b;
printf("Area of triangle=%f\n",area);
getch();
}