#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a character\n");
ch=getchar();
if(islower(ch))
    printf("Capital letter of %c Given Small letter is %c\n",ch,toupper(ch));
else
if(isupper(ch))
    printf("Small letter of %c Given Capital letter is %c\n",ch,tolower(ch));
getch();
}