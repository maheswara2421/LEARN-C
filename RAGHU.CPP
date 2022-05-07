#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet;
clrscr();
printf("enter any char");
scanf("%c",&alphabet);
if(alphabet>='a' && alphabet<='z')
printf("given char is small");
if(alphabet>='A' && alphabet<='Z')
printf("captail letter");
getch();
}