/*prg to swap two given values using third variable */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter A and B values");
scanf("%d%d",&a,&b);
printf("Before swapping A = %d,B = %d\n",a,b);
c=a;
a=b;
b=c;
printf("After swapping A = %d,B = %d\n",a,b);
getch();
}