#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f=1;
clrscr();
printf("Enter N value");
scanf("%d",&n);
for(i=1;i<=n;i++)
	f=f*i;
printf("Factorial of %d given number is %d\n",n,f);
getch();
}
