//0 1 1 2 3 5 8 13 21 34 55 ......... upto n value
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,n;
clrscr();
printf("Enter N value");
scanf("%d",&n);
printf("%3d%3d",a,b);
do
{
	c=a+b;
	printf("%3d",c);
	a=b;
	b=c;
}while(c<=n);
getch();
}