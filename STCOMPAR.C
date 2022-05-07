#include<stdio.h>
#include<conio.h>
void main()
{
char st[30],s[30];
int i,j;
clrscr();
printf("Enter First String\n");
gets(st);
printf("Enter Second String\n");
gets(s);
i=strlen(st);
j=strlen(s);
printf("First String = %s and its Length = %d\n",st,i);
printf("Second String = %s and its Length = %d\n",s,j);
if(i==j)
{
   if(strcmp(st,s)==0)
	printf("First String %s is Equal to Second String = %s\n",st,s);
   else
	printf("First String %s is Not Equal to Second String = %s\n",st,s);
}
else
   printf("Two Given Strings are Not Equal\n");
getch();
}