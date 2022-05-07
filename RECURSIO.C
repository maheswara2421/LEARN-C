#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,k;
clrscr();
printf("Enter n value");
scanf("%d",&n);
k=fact(n);
printf("Factorial of %d given number is %d\n",n,k);
getch();
}
int fact(int x)
{
int f=1;
if(x!=0)
	f=x*fact(x-1);
else
	return(f);
}