/* prg to accept a character and print given character */
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
/*printf("Enter a character\n");
scanf("%c",&ch);
printf("Given character is %c\n",ch);*/
printf("Enter a character\n");
ch=getchar();
printf("Given character is ");
putchar(ch);
getch();
}