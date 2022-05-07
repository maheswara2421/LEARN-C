/*prg to print sum of first 1 number, first 2 numbers, first 3 numbers and so on first n numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter N value");
scanf("%d",&n);
i=1;
do
{
    sum=sum+i;
    printf("Sum of First %d numbers are %d\n",i,sum);
    i++;
}while(i<=n);
getch();
}
