//prg to read and print using Structure variables
#include<iostream.h>
#include<conio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
};
void main()
{
clrscr();
emp e;
cout<<"Enter Employee Number";
cin>>e.eno;
cout<<"Enter Employee Name";
cin>>e.ename;
cout<<"Enter Employee Salary";
cin>>e.sal;
cout<<"The Employee Details"<<endl;
cout<<"Employee Number = "<<e.eno<<endl;
cout<<"Employee Name = "<<e.ename<<endl;
cout<<"Employee Salary = "<<e.sal<<endl;
getch();
}