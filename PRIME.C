#include<stdio.h>
#include<conio.h>
void main()
{
int c=0,i,n;
clrscr();
printf("Enter N value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
	printf("%3d",i);
	c++;
    }
}
if(c==2)
	printf("\nPrime Number = %d\n",n);
else
	printf("\nNot Prime Number = %d\n",n);
getch();
}