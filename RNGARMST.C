//armstrong numbers within given range
#include<stdio.h>
#include<conio.h>
void main()
{
int x,arm,n,d,i,m;
clrscr();
printf("Enter the range");
scanf("%d%d",&m,&n);
if(m<=n)
{
i=m;
while(i<=n)
{
	x=i;
	arm=0;
	while(x!=0)
	{
		d=x%10;
		arm=arm+d*d*d;
		x=x/10;
	}
	if(i==arm)
		printf("%5d",i);
i++;
}
}
else
	printf("Enter M<N");
getch();
}