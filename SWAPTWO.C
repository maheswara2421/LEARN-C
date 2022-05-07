/*prg to swap two given values without using third variable */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter A and B values");
scanf("%d%d",&a,&b);	//a=5,b=7
printf("Before swapping A = %d,B = %d\n",a,b);
a=a+b;	//a=5+7=12
b=a-b; //b=12-7=5
a=a-b;
printf("After swapping A = %d,B = %d\n",a,b);
getch();
}