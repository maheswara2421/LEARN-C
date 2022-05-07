/*prg without using mod(%) operators */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r,q;
clrscr();
printf("Enter A and B values");
scanf("%d%d",&a,&b);
q=a/b;
printf("Quiotient of A = %d BY B = %d values are Q = %d\n",a,b,q);
r=a-b*q;
printf("Remainder of A = %d mod B = %d values are R = %d",a,b,r);
getch();
}

