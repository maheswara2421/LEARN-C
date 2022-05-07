#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],m,n,i,j;
clrscr();
printf("Enter size of Matrix A:\n");
scanf("%d%d",&m,&n);
printf("Enter Elements of Matrix A:\n");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("Elements of Matrix A:\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
printf("%3d",a[i][j]);
printf("\n");
}
getch();
}