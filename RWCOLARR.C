#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],m,n,i,j,rsum,csum;
clrscr();
printf("Enter the size of Matrix A:\n");
scanf("%d%d",&m,&n);
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
printf("\nRowWise Elements of Given Matrix A:\n");
for(i=1;i<=m;i++)
{
   rsum=0;
printf("%d Row elements are\t",i);
   for(j=1;j<=n;j++)
   {
	printf("%3d",a[i][j]);
	rsum=rsum+a[i][j];
   }
   printf("%5d",rsum);
   printf("\n");
}
printf("\nColumnWise Elements of given Matrix A:\n");
for(j=1;j<=n;j++)
{
	csum=0;
printf("%d Column Elements are\t",j);
   for(i=1;i<=m;i++)
   {
	  printf("%3d",a[i][j]);
	 csum=csum+a[i][j];
   }
   printf("%5d",csum);
   printf("\n");
}
getch();
}