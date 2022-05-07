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
	c++;
    }
	i++;
	goto x;
}
if(c==2)
	printf("\nIts Prime Number = %d\n",n);
else
	printf("\nIts Not Prime Number = %d\n",n);
getch();
}