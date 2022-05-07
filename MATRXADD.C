#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j;
clrscr();
printf("Enter size of Matrix A:\n");
scanf("%d%d",&m,&n);
printf("Enter size of Matrix B:\n");
scanf("%d%d",&p,&q);
if((m==p) && (n==q))
{
printf("Enter Elements of Matrix A:\n");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("Enter Elements of Matrix B:\n");
for(i=1;i<=p;i++)
for(j=1;j<=q;j++)
scanf("%d",&b[i][j]);
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf("Elements of Matrix A:\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
printf("%3d",a[i][j]);
printf("\n");
}
printf("Elements of Matrix B:\n");
for(i=1;i<=p;i++)
{
for(j=1;j<=q;j++)
printf("%3d",b[i][j]);
printf("\n");
}
printf("Elements of Matrix C:\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
printf("%3d",c[i][j]);
printf("\n");
}
}
else
printf("Matrix Addition is Not Possible");
getch();
}