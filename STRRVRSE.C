#include<stdio.h>
#include<conio.h>
void main()
{
char st[30];
clrscr();
printf("Enter a String\n");
gets(st);
printf("Given String is %s\n",st);
strrev(st);
printf("Reverse of Given string is %s\n",st);
getch();
}