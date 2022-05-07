#include<stdio.h>
#include<conio.h>
void main()
{
int a;
char c;
clrscr();
printf("Enter A value");
scanf("%d",&a);
c=a;
if(a>=65 && a<=90)
	printf("Its Capital Letter %c",c);
else
if(a>=97 && a<=122)
	printf("Its Small Letter = %c",c);
else
	printf("Its Not An AlphaBet = %c",c);
getch();
}