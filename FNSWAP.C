#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
int a,b;
clrscr();
printf("Enter A and B values");
scanf("%d%d",&a,&b);	//a=7, b=12
printf("Before swapping A = %d\t B = %d\n",a,b);
swap(a,b);	//actual arguments
printf("After Swapping A = %d\t B = %d\n",a,b); //a=7 b=12
getch();
}
void swap(int x,int y)	//formal arguments
{
int tmp;
tmp=x;
x=y;
y=tmp;
printf("Swapped values are X = %d\t Y = %d\n",x,y);	//x=12, y=7
}
