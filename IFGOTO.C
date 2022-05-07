/*To print odd numbers from 1 to n*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter a value");
scanf("%d",&n);
i=1;
x:
if(i<=n)
{
 printf("odd number %d\n",i);
 i+=2;
}
 getch();
}
