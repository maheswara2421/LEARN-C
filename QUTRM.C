#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
a=10;
b=3;
if(a>b)
{
	c=a/b;
	printf("Quotient of %d Mod %d is = %d\n",a,b,c);
}
else
if(b>a)
{
	d=a%b;
	printf("Remainder of %d by %d is = %d\n",a,b,d);
}
getch();
}