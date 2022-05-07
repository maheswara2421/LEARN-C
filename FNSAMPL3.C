#include<stdio.h>
#include<conio.h>
void first();
void second();
void third();
void main()
{
clrscr();
first();
second();
third();
getch();
}
void second()
{
	printf("This is Second Function\n");
	third();
}
void third()
{
	printf("This is Third Function\n");
}
void first()
{
	printf("This is First Function\n");
	second();
}