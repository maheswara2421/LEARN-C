#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
private:
	int sno;
	char sname[20];
	float marks;
public:
	void accept(int sn,char snm[20],float mks)
	{
		sno=sn;
		strcpy(sname,snm);
		marks=mks;
	}
	void print()
	{
		cout<<"Student Number = "<<sno<<endl;
		cout<<"Student Name = "<<sname<<endl;
		cout<<"Student Marks = "<<marks<<endl;
	}
};
void main()
{
student s,s1;
clrscr();
s.accept(101,"kris",89.34);
s1.accept(102,"ram",56.77);
s.print();
s1.print();
getch();
}