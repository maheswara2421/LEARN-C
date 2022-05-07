//prg to read and print using Structure variables
#include<stdio.h>
#include<conio.h>
struct emp
{
	int eno;
	char ename[20];
	int sal;
};
void main()
{
struct emp e[30];
int n,i;
clrscr();
printf("Enter Number of Employees to Read\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter %d Employee Number = ",i);
scanf("%d",&e[i].eno);
printf("Enter Employee Name");
scanf("%s",e[i].ename);
printf("Enter Employee Salary");
scanf("%d",&e[i].sal);
}
for(i=1;i<=n;i++)
{
printf("\nThe Employee Details\n");
printf("Employee Number = %d\n",e[i].eno);
printf("Employee Name = %s\n",e[i].ename);
printf("Employee Salary = %d",e[i].sal);
}
getch();
}