#include<iostream.h>
#include<conio.h>
class emp
{
protected:
	int eno;
	char ename[20];
public:
	void accept()
	{
		cout<<"Enter employee number";cin>>eno;
		cout<<"Enter employee name";cin>>ename;
	}
	void display()
	{
		cout<<"Employee Number = "<<eno<<endl;
		cout<<"Employee Name = "<<ename<<endl;
	}
};
class empsal:public emp
{
private:
	int sal;
public:
	void read()
	{
		accept();
		cout<<"Enter salary";cin>>sal;
	}
	void print()
	{
		display();
		cout<<"Employee salary = "<<sal<<endl;
	}
};
void main()
{
empsal e;
clrscr();
e.read();
e.print();
getch();
}

