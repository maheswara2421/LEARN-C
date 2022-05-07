#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
clrscr();
printf("Enter a and b values");
scanf("%d%d",&a,&b);
printf("Before swapping A = %d\tB = %d\n",a,b);    //a=7,b=12
swap(&a,&b);
printf("After swapping A = %d\tB = %d\n",a,b);  //12,b=7
getch();
}
void swap(int *x,int *y)     //*x=7,*y=12
{
int tmp;
tmp=*x;
*x=*y;
*y=tmp;
printf("Swapped values are *X = %d\t*Y = %d\n",*x,*y);  //*x=12, *y=7
}
