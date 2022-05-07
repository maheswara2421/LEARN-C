#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
	if(a>c)
		printf("A is Greatest = %d\n",a);
	else
		printf("C is Greatest = %d\n",c);
}
else
if(b>a)
{
       if(b>c)
		printf("B is Greatest = %d\n",b);
       else
		printf("C is Greatest = %d\n",c);
}
getch();
}