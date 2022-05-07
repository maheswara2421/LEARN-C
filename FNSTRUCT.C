#include<stdio.h>
#include<conio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}e1;
void display(struct emp a,struct emp *b);
void main()
{
struct emp e;
clrscr();
printf("Enter employee number");
scanf("%d",&e.eno);
printf("Enter employee name");
scanf("%s",e.ename);
printf("Enter employee Salary");
scanf("%f",&e.sal);
printf("Enter employee number");
scanf("%d",&e1.eno);
printf("Enter employee name");
scanf("%s",e1.ename);
printf("Enter employee Salary");
scanf("%f",&e1.sal);
display(e,&e1);
getch();
}
void display(struct emp a,struct emp *b)
{
printf("Employee number = %d\n",a.eno);
printf("Employee Name = %s\n",a.ename);
printf("Employee Salary = %f\n",a.sal);
printf("Employee number = %d\n",b->eno);
printf("Employee Name = %s\n",b->ename);
printf("Employee Salary = %f\n",b->sal);
}
