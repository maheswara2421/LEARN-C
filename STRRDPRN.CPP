#include<iostream.h>
#include<conio.h>
struct emp
{
	int eno;
	char ename[20];
	int sal;
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
cout<<"Employee Details are"<<endl;
cout<<"E.Eno = "<<e.eno<<endl;
cout<<"E.Ename = "<<e.ename<<endl;
cout<<"E.Salary = "<<e.sal<<endl;
getch();
}