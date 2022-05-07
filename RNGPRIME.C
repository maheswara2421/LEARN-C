//prime numbers within given range
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,n,count;
clrscr();
printf("Enter the Range");
scanf("%d%d",&m,&n);
printf("Prime Numbers between %d and %d are\n",m,n);
if(m<=n)
{
for(i=m;i<=n;i++)
{
   count=0;
   for(j=1;j<=i;j++)
   {
	if(i%j==0)
	   count++;
   }
   if(count==2)
	printf("%4d",i);
}
}
else
  printf("Enter M<N");
getch();
}