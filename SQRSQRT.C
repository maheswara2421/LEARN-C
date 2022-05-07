#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,sqr;
float root;
clrscr();
printf("Enter x value");
scanf("%d",&x);
sqr=pow(x,2);
printf("Square of %d given number is %d\n",x,sqr);
root=sqrt(x);
printf("Square Root of %d given number is %.3f\n",x,root);
getch();
}
