#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],m,n,i,j;
clrscr();
printf("Enter the size of Matrix A:\n");
scanf("%d%d",&m,&n);
if(m==n)
{
printf("Enter The elements of Matrix A:\n");
for(i=1;i<=m;i++)
  for(j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
printf("The Elements of Given Matrix A:\n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
   {
	printf("%3d",a[i][j]);
   }
   printf("\n");
}
printf("\nDiagonals of Given Matrix A:\n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
   {
      if(i==j)
	printf("%3d",a[i][j]);
   }
}
printf("\nAbove Diagonal Elements of given Matrix A:\n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
   {
	if(i<j)
	   printf("%3d",a[i][j]);
   }
}
printf("\nBelow Diagonal Elements of given Matrix A:\n");
for(i=1;i<=m;i++)
{
   for(j=1;j<=n;j++)
   {
	if(i>j)
	   printf("%3d",a[i][j]);
   }
}
}
else
printf("Its Not a Square Matrix, Plz Enter Square Matrix\n");
getch();
}