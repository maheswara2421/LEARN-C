#include<stdio.h>
#include<conio.h>
void main()
{
char st[30];
int l;
clrscr();
printf("Enter a String\n");
gets(st);
l=strlen(st);
printf("Given String is %s\n",st);
printf("Length of Given string is %d\n",l);
getch();
}