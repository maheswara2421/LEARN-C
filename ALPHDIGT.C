#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a character\n");
ch=getchar(); //scanf("%c",&ch);
if(isalpha(ch))
	printf("Given Letter is AlphaBet = %c\n",ch);
else
if(isdigit(ch))
	printf("Given Letter is Numeric = %c\n",ch);
else
	printf("Given Letter is AlphaNumeric = %c\n",ch);
getch();
}