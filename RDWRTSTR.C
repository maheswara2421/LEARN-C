//prg to read and print using Structure variables
#include<stdio.h>
#include<conio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
};
void main()
{
struct emp e;
clrscr();
printf("Enter Employee Number");
scanf("%d",&e.eno);
printf("Enter Employee Name");
scanf("%s",e.ename);
printf("Enter Employee Salary");
scanf("%f",&e.sal);
printf("The Employee Details\n");
printf("Employee Number = %d\n",e.eno);
printf("Employee Name = %s\n",e.ename);
printf("Employee Salary = %f",e.sal);
getch();
}