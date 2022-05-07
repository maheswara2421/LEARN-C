//functions without arguments and with returning values
#include<stdio.h>
#include<conio.h>
float add();
void main()
{
float c;
clrscr();
c=add();
printf("Resultant value =  %.2f",c);
getch();
}
float add()
{
float x,y,z;
printf("Enter x value");
scanf("%f",&x);
printf("Enter y value");
scanf("%f",&y);
z=x+y;
return z;
}


