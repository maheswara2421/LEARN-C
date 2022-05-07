#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[30],i,j,t;
clrscr();
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("Given array elements are\n");
for(i=1;i<=n;i++)
printf("A[%d] = %d\n",i,a[i]);
for(i=1;i<=n;i++)
{
   for(j=1;j<=n;j++)
   {
	if(a[i]>a[j])
	{
	   t=a[i];
	   a[i]=a[j];
	   a[j]=t;
	}
   }
}
printf("The sorted array elements are\n");
for(i=1;i<=n;i++)
printf("A[%d] = %d\n",i,a[i]);
getch();
}