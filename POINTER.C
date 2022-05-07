#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*ptr;
clrscr();
a=10;
ptr=&a;
b=*ptr;
printf("the variable a address=%u\t value=%d\n",&a,a);
printf("the pointer pointg to a%u\t value=%d\n",ptr,*ptr);
printf("the variable b address=%u\t value=%d\n",&b,b);
*ptr=20;
printf("the pointer address=%u\n",&ptr);
printf("the a value=%d\t pointer value=%d\n",a,*ptr);
getch();
}

