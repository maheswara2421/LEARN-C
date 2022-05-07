#include<stdio.h>
#include<conio.h>
void main()
{
int n=5,sum=0;
clrscr();
while(n!=0)
{
	printf("Enter N value");
	scanf("%d",&n);
	sum=sum+n;
}
	printf("Sum of Given Numbers are %d\n",sum);
getch();
}