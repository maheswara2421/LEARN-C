#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter A and B values");
scanf("%d%d",&a,&b);
if(a==b)
	printf("Sum of %d and %d values are %d\n",a,b,a+b);
else
if(a!=b)
	printf("Multiplication of %d and %d values are %d\n",a,b,a*b);
getch();
}
