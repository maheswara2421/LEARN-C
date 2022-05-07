#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter N value");
scanf("%d",&n);
printf("Factors of %d Given number is ",n);
for(i=1;i<=n;i++)
{
	if(n%i==0)
	  printf("%3d",i);
}
getch();
}