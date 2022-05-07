#include<stdio.h>
#include<conio.h>
void main()
{
int small,big,a[30],i,n;
clrscr();
printf("Enter array size:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
big=a[1];
small=a[1];
for(i=1;i<=n;i++)
{
	if(big<=a[i])
		big=a[i];
	if(small>=a[i])
		small=a[i];
}
printf("Biggest element of given array is %d:\n",big);
printf("Smallest element of given array is %d:\n",small);
getch();
}
