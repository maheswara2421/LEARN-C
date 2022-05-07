//6 -> 1+2+3+6=2*6
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,cnt=0;
clrscr();
printf("Enter N value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   if(n%i==0)
     cnt=cnt+i;
}
if(cnt==2*n)
	printf("Perfect Number");
else
	printf("Not Perfect Number");
getch();
}