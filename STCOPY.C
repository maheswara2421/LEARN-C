#include<stdio.h>
#include<conio.h>
void main()
{
char st[30],s[30];
clrscr();
printf("Enter a String\n");
gets(st);
printf("Given String is %s\n",st);
strcpy(s,st);
printf("Duplicate String %s of a Given string is %s\n",s,st);
getch();
}