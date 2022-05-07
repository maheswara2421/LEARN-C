#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,k;
clrscr();
printf("Enter n value");
scanf("%d",&n);
k=fact(n);
printf("Factorial of %d given number is %d\n",n,k);
getch();
}
int fact(n)
{
int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}