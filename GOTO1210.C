#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0;
clrscr();
printf("Enter N value");
scanf("%d",&n);
x:
if(i<=n)
{
	printf("i = %d\n",i);
	i+=2; //i=i+2;
	goto x;
}
getch();
}