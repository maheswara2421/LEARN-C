#include<stdio.h>
#include<conio.h>
void main()
{
int n,x,a[20],flag=0,i;
clrscr();
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched\n");
scanf("%d",&x);
for(i=1;i<=n;i++)
{
   if(x==a[i])
   {
      flag=1;
      break;
   }
   else
     flag=0;
}
if(flag==1)
	printf("The element %d found at %d position\n",a[i],i);
else
	printf("The element Not Found\n");

getch();
}