#include<stdio.h>
#include<conio.h>
void main()
{
char st[30],s[30];
clrscr();
printf("Enter First String\n");
gets(st);
printf("Enter Second String\n");
gets(s);
printf("First String is %s\n",st);
printf("Second String is %s\n",s);
strcat(st,s);
printf("Resultant String is %s\n",st);
getch();
}