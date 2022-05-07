#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
sam:
if(i<=20)
{
	printf("i = %d\t",i);
	i+=2; //i=i+2;
	goto sam;
}
getch();
}