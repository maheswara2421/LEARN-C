#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the Number");
scanf("%d",&n);
if(n%2==0)
	printf("Given Number is Even Number = %d\n",n);
else
	printf("Given Number is Odd Number = %d\n",n);
getch();
}