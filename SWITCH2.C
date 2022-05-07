#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int a,b;
clrscr();
printf("Enter a Character(+,-,*,/,%\n");
ch=getchar();
printf("Enter a and b values");
scanf("%d%d",&a,&b);
switch(ch)
{
case '+':
	printf("Sum of %d and %d values are %d\n",a,b,a+b);
	break;
case '-':
	printf("Subtraction of %d From %d value is %d\n",b,a,a-b);
	break;
case '*':
	printf("Multiplication of %d and %d values are %d\n",a,b,a*b);
	break;
case '/':
	printf("Quotient of %d By %d values are %d\n",a,b,a/b);
	break;
case '%':
	printf("Remainder of %d Mod %d values are %d\n",a,b,a%b);
	break;
default:
	printf("Plz Enter above specified characters only");
}
getch();
}