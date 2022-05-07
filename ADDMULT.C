#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter A and B values\n");
scanf("%d%d",&a,&b);
if(a==b)
{
	c=a+b;
	printf("Sum of A = %d and B = %d values are C = %d\n",a,b,c);
}
else
if(a!=b)
{
	c=a*b;
	printf("Multiplication of A = %d and B = %d values are C = %d\n",a,b,c);
}
getch();
}