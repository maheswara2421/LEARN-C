#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,big;
clrscr();
printf("Enter a and b values");
scanf("%d%d",&a,&b);
big=a;
if(a<b)
   big=b;
printf("Biggest of Two Given Elements = %d\n",big);
getch();
}