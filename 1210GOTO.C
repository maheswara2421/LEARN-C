#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
x:
if(i<=10)
{
	printf("Hello good Morning = %d\n",i);
	i++;
	goto x;
}
getch();
}

