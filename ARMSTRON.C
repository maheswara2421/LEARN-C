#include<stdio.h>
#include<conio.h>
void main()
{
int x,arm=0,n,d;
clrscr();
printf("Enter n value");
scanf("%d",&n);
x=n;
while(n!=0)
{
	d=n%10;
	arm=arm+d*d*d;
	n=n/10;
}
if(x==arm)
	printf("ArmStrong Number = %d\n",x);
else
	printf("Not ArmStrong Number = %d\n",x);
getch();
}