/*prg to print even numbers between 1 and 20 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
sam:
if(i<=20)
{
	if(i%2==0)
	   printf("i = %d\t",i);
	i++;
	goto sam;
}
getch();
}