#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter N value");
scanf("%d",&n);
printf("Multiplication Table of %d Given Number is \n",n);
for(i=1;i<=10;i++)
    printf("%d * %d = %d\n",n,i,n*i);
getch();
}
