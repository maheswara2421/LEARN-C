/* prg to print multiplication of two given numbers until u press 'n' */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
char ans;
clrscr();
sri:
printf("\nenter any numbers to a,b");
scanf("%d%d",&a,&b);
c=a+b;
printf("c=%d\n",c);
printf("Do you want to continue y/n");
ans=getche();
if(ans=='y')
goto sri;
getch();
}
