#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],m,n,i,j;
clrscr();
printf("Enter Matrix Size");
scanf("%d%d",&m,&n);
printf("Enter Matrix elements\n");
for(i=1;i<=m;i++)
  for(j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
printf("Elements of Given Matrix A:\n");
for(i=1;i<=m;i++)  //row
{
  for(j=1;j<=n;j++)  //column
  {
    printf("%3d",a[i][j]);
  }
  printf("\n");
}
printf("Tranpose of a Given Matrix:\n");
for(j=1;j<=n;j++)
{
   for(i=1;i<=m;i++)
   {
     printf("%3d",a[i][j]);
   }
   printf("\n");
}
getch();
}
