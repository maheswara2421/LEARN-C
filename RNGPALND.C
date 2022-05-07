#include<stdio.h>
#include<conio.h>
void main()
{
int r,d,x,n,m,i,j;
clrscr();
printf("Enter the range");
scanf("%d%d",&m,&n);
i=m;
do
{
    x=i;r=0;
    do
    {
	d=x%10;
	r=r*10+d;
	x=x/10;
    }while(x!=0);
if(i==r)
   printf("%5d",i);
   i++;
}while(i<=n);
getch();
}