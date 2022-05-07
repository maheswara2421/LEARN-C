#include<stdio.h>
#include<conio.h>
void main()
{
int r=0,d,x,n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
x=n;
while(x>0)
{
	d=x%10;
	r=r*10+d;
	x=x/10;
}
printf("Reverse of %d given number is %d\n",n,r);
getch();
}