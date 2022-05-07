#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter N value");
scanf("%d",&n);
kris:
if(n>0)
{
	printf("i = %d\n",n);
	n--;
	goto kris;
}
getch();
}