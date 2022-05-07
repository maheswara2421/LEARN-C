//Mutiplication tables within given range
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m,n;
clrscr();
printf("Enter m and n value");
scanf("%d%d",&m,&n);
if(m<=n)
{
    for(i=m;i<=n;i++)
    {
	for(j=1;j<=10;j++)
	{
	    printf("%d * %d = %d\n",i,j,i*j);
	}
	printf("\n");
	getch();
    }
}
else
    printf("Multiplication Is Not Possible\n");
getch();
}