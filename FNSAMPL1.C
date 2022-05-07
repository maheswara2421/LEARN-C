#include<stdio.h>
#include<conio.h>
void hello();	//prototype declaration or Function declaration
void main()      //System defined function
{
clrscr();	//standard library function
hello();	//user defined function
hello();
hello();
getch();
}
void hello()	//Function definition or body of the function
{
	printf("Hello Good Morning\n");
	printf("Welcome To India\n");
	printf("Thank You\n");
	printf("Visit Again\n");
}