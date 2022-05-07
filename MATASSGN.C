#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	    };
clrscr();
printf("The assignment values are:\n");
for(i=0;i<4;i++)
{
	for(j=0;j<3;j++)
	   printf("%3d",a[i][j]);
   printf("\n");
}
getch();
}


























