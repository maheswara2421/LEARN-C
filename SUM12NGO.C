#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter N value");
scanf("%d",&n);
i=1;
x:
if(i<=n)
{
	sum=sum+i;
	i++;
	goto x;
}
printf("Sum of %d given numbers are %d\n",n,sum);
getch();
}