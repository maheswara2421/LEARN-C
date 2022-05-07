#include<stdio.h>
#include<conio.h>
void display(int *b,int x);
void main()
{
int a[20],n,i;
clrscr();
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
display(a,n);
getch();
}
void display(int *b,int x)
{
int j;
printf("Given array elements are\n");
for(j=1;j<=x;j++)
printf("b[%d] = %d\n",j,b[j]);
}