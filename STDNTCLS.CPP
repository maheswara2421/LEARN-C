#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
private:
	int sno,m1,m2,tot;
	char sname[20];
	float avg;
public:
	void accept()
	{
		cout<<"Enter student number";cin>>sno;
		cout<<"Enter student name";cin>>sname;
		cout<<"Enter student marks in M1 Subject";cin>>m1;
		cout<<"Enter student marks in M2 Subject";cin>>m2;
	}
	void calc()
	{
		tot=m1+m2;
		avg=(float)tot/2;
	}
	void print()
	{
		cout<<"Student Number = "<<sno<<endl;
		cout<<"Student Name = "<<sname<<endl;
		cout<<"Enter student marks in M1 Subject = "<<m1<<endl;
		cout<<"Enter student marks in M2 Subject = "<<m2<<endl;
		cout<<"Total Marks of Student = "<<tot<<endl;
		cout<<"Average Marks of Student = "<<avg<<endl;
	}
};
void main()
{
clrscr();
student s;
s.accept();
s.calc();
s.print();
getch();
}