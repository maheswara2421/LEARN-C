#include<iostream.h>
#include<conio.h>
#include<string.h>
struct student
{
	int sno;
	char sname[20];
	int marks;
}s;
void main()
{
	clrscr();
	student s1={101,"ramu",89};
	student s2;
	s2.sno=102;
	strcpy(s2.sname,"kiran");
	s2.marks=75;
	s=s2;
	cout<<"S student Details are\n";
	cout<<"S.SNO = "<<s.sno<<endl;
	cout<<"S.SNAME = "<<s.sname<<endl;
	cout<<"S.MARKS = "<<s.marks<<endl;
	cout<<"S1 student Details are\n";
	cout<<"S1.SNO = "<<s1.sno<<endl;
	cout<<"S1.SNAME = "<<s1.sname<<endl;
	cout<<"S1.MARKS = "<<s1.marks<<endl;
	cout<<"S2 student Details are\n";
	cout<<"S2.SNO = "<<s2.sno<<endl;
	cout<<"S2.SNAME = "<<s2.sname<<endl;
	cout<<"S2.MARKS = "<<s2.marks<<endl;
	getch();
}