#include<stdio.h>
#include<conio.h>
void main()
{
char st[30],s[30];
clrscr();
printf("Enter a String\n");
gets(st);
strcpy(s,st);
printf("Given String is %s\n",st);
strrev(s);
printf("Reverse of Given string is %s\n",s);
if(strcmp(s,st)==0)
{
	printf("%s is Equal to %s\n",st,s);
	printf("Palindrome");
}
else
{
	printf("%s is Not equal to %s\n",st,s);
	printf("Not Palindrome");
}
getch();
}