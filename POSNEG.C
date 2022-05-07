#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
if(n>0)
	printf("Positive Number = %d\n",n);
else
if(n<0)
	printf("Negative Number = %d\n",n);
else
	printf("Its Zero %d\n",n);
getch();
}