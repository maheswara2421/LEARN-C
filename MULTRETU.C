#include<stdio.h>
#include<conio.h>
int evenodd(int);
void main()
{
int a,k;
clrscr();
printf("Enter A value");
scanf("%d",&a);
k=evenodd(a);
if(k==0)
	printf("Its Even Number = %d\n",a);
else
	printf("Its Odd Number = %d\n",a);
getch();
}
int evenodd(int x)
{
if(x%2==0)
	return 0;
else
	return 1;
}