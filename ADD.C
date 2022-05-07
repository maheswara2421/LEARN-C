/* prg to add two given numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter A value");
scanf("%d",&a);
printf("Enter B value");
scanf("%d",&b);
c=a+b;
printf("Sum of A and B values are C = %d\n",c);
printf("Sum of A = %d and B = %d values C = %d\n",a,b,c);
printf("%d + %d = %d\n",a,b,c);
getch();
}