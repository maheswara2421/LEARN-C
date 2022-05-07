#include<stdio.h>
#include<conio.h>
void main()
{
int i,low,high,mid,n,a[30],x,flag=0;
clrscr();
printf("Enter the array size");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be Searched in given array\n");
scanf("%d",&x);
low=0;
high=n-1;
while(low<=high)
{
	mid=(low+high)/2;
	if(x==a[mid])
	{
	   flag=1;
	   break;
	}
	else
	if(a[mid]<x)
		low=mid+1;
	    else
		high=mid-1;
}
if(flag==1)
   printf("The element whose value is %d is present at position %d in the array\n",x,mid);
else
  printf("The element is Not Found in the Given array\n");
getch();
}