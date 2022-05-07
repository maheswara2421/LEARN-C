#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
	printf("A is greatest = %d\n",a);

if(b>a && b>c)
	printf("B is Greatest = %d\n",b);

if(c>a && c>b)
	printf("C is Greatest = %d\n",c);
getch();
}