#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,c=0;
clrscr();
printf("Enter N value");
scanf("%d",&n);
x:
if(i<=n)
{
    if(n%i==0)
    {
	printf("%4d",i);
	c=c+i;
    }
	i++;
	goto x;
}
if(c==2*n)
	printf("\nIts Perfect Number = %d\n",n);
else
	printf("\nIts Not Perfect Number = %d\n",n);
getch();
}