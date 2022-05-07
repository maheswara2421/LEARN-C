/*PRG TO PRINT ASCII CODE FOR A GIVEN CHARACTER*/
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character\n");
scanf("%c",&ch);
printf("Ascii code of %c given character is %d\n",ch,ch);
getch();
}