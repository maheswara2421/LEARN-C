#include<stdio.h>
#define MAX 10
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
void bsort(int list[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
   for(j=0;j<n-(i+1);j++)
	if(list[j]>list[j+1])
		swap(&list[j],&list[j+1]);
}
void readlist(int list[],int n)
{
int i;
printf("Enter n elements\n");
for(i=0;i<n;i++)
  scanf("%d",&list[i]);
}
void printlist(int list[],int n)
{
int i;
for(i=0;i<n;i++)
   printf("%d\t",list[i]);
}
void main()
{
int list[MAX],n;
clrscr();
printf("Enter the size of an array\n");
scanf("%d",&n);
readlist(list,n);
printf("The list before sorting is:\n");
printlist(list,n);
bsort(list,n);
printf("\nThe list after sorting is:\n");
printlist(list,n);
getch();
}