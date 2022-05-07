#include<iostream.h>
#include<conio.h>
class student
{
protected:
	int sno;
	char sname[20];
public:
	void getdata()
	{
		cout<<"Enter student number";cin>>sno;
		cout<<"Enter student name";cin>>sname;
	}
	void putdata()
	{
		cout<<"Student Number = "<<sno<<endl;
		cout<<"Student Name = "<<sname<<endl;
	}
};
class marks:public student
{
protected:
	int m1,m2;
public:
	void getmks()
	{
		cout<<"Enter marks in M1";cin>>m1;
		cout<<"Enter marks in M2";cin>>m2;
	}
	void putmks()
	{
		cout<<"M1 Subject Marks = "<<m1<<endl;
		cout<<"M2 Subject Marks = "<<m2<<endl;
	}
};
class result:public marks
{
private:
	int total;
	float avg;
public:
	void calc()
	{
		total=m1+m2;
		avg=(float)(m1+m2)/2;
	}
	void print()
	{
		cout<<"Total Marks = "<<total<<endl;
		cout<<"Average Marks = "<<avg<<endl;
	}
};
void main()
{
result r;
clrscr();
r.getdata();
r.getmks();
r.calc();
r.putdata();
r.putmks();
r.print();
getch();
}
