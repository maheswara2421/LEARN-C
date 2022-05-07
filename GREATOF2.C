#include<stdio.h>
#include<conio.h>
void main()
{
int p,q,big;
clrscr();
printf("Enter P and Q values\n");
scanf("%d%d",&p,&q);
big=p;
if(p<q)
   big=q;
printf("Greatest of Two Given Numbers = %d\n",big);
getch();
}