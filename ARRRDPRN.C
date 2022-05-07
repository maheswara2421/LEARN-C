#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n;
clrscr();
printf("Enter array size\t:");
scanf("%d",&n);
printf("Enter The array elements\n");
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("The given array elements are:\n");
for(i=0;i<n;i++)
   printf("a[%d] = %d\n",i,a[i]);

printf("The given array elements from 0 to n are:\n");
for(i=0;i<=n;i++)
   printf("a[%d] = %d\n",i,a[i]);
printf("The given array elements from 1 to n-1 are:\n");
for(i=1;i<n;i++)
   printf("a[%d] = %d\n",i,a[i]);
printf("The given array elements from 1 to n are:\n");
for(i=1;i<=n;i++)
   printf("a[%d] = %d\n",i,a[i]);

printf("The Reverse of given array elements are:\n");
for(i=n-1;i>=0;i--)
   printf("a[%d] = %d\n",i,a[i]);
getch();
}