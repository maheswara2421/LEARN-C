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
printf("Sum of A and B values are = %d\n",c);
printf("Sum of %d and %d values are = %d\n",a,b,c);
printf("%d + %d = %d\n",a,b,c);
getch();
}