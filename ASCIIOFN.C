/* PRG TO PRINT ASCII CHARACTER FOR A GIVEN NO */
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a number");
scanf("%d",&n);
printf("ASCII character of %d given number is %c\n",n,n);
getch();
}