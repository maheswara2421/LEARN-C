#include<stdio.h>
#include<conio.h>
void main()
{
char ch[50];
clrscr();
printf("Enter a string");
//scanf("%s",ch);
gets(ch);
printf("Given String is %s",ch);
//puts(ch);
getch();
}