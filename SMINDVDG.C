#include<stdio.h>
#include<conio.h>
void main()
{
int x,n,sum=0,d;
clrscr();
printf("Enter N value");
scanf("%d",&n);
x=n;
while(n>0)
{
	d=n%10;
	sum=sum+d;
	n=n/10;
}
printf("Sum of Individual digits of %d given Number is %d\n",x,sum);
getch();
}