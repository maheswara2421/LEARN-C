//functions with arguments with returning values
#include<stdio.h>
#include<conio.h>
float add(float,float);
void main()
{
float a,b,c;
clrscr();
printf("Enter A value");
scanf("%f",&a);
printf("Enter B value");
scanf("%f",&b);
c=add(a,b);
printf("Sum of %.2f and %.2f values are %.2f\n",a,b,c);
getch();
}
float add(float x,float y)
{
float z=x+y;
return(z);
}


