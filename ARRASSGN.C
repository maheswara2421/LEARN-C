#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int a[]={12,23,34,45,56,67,78,89,90};
clrscr();
printf("The given array elements are:\n");
for(i=0;i<9;i++)
   printf("a[%d] = %d\n",i,a[i]);

getch();
}