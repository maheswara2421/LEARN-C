/*PRG TO PRINT QUOTIENT AND REMAIDER OF TWO GIVEN NUMBERS*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,q,r;
clrscr();
printf("Enter A and B values");
scanf("%d%d",&a,&b);
r=a%b;
q=a/b;
printf("%d mod %d = %d\n",a,b,r);
printf("%d by %d = %d\n",a,b,q);
getch();
}