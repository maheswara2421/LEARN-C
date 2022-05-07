#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],c[20],i,j,n,m;
clrscr();
printf("Enter size of array A:\t");
scanf("%d",&m);
printf("Enter size of array B:\t");
scanf("%d",&n);
if(m==n)
{
printf("Enter elements of First array\n");
for(i=1;i<=m;i++)
  scanf("%d",&a[i]);
printf("Enter elements of Second array\n");
for(j=1;j<=n;j++)
  scanf("%d",&b[j]);
for(i=1;i<=m;i++)
   c[i]=a[i]+b[i];
printf("The elements of A matrix:\n");
for(i=1;i<=m;i++)
   printf("%3d",a[i]);
printf("\nThe elements of B matrix:\n");
for(i=1;i<=m;i++)
   printf("%3d",b[i]);
printf("\nThe elements of C matrix:\n");
for(i=1;i<=m;i++)
   printf("%3d",c[i]);
}
else
printf("Matrix addition is Not possible");
getch();
}