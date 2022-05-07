#include<stdio.h>
#include<conio.h>
void main()
{
int r=0,d,x,n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
x=n;
do
{
	d=x%10;
	r=r*10+d;
	x=x/10;
}while(x!=0);
if(n==r)
{
	printf("Reverse of %d given number is %d\n",n,r);
	printf("PALINDROME NUMBER = %d\n",n);
}
else
{
	printf("Reverse of %d Given number is %d\n",n,r);
	printf("Not Plaindrome Number = %d\n",n);
}
getch();
}