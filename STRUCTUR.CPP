#include<iostream.h>
#include<string.h>
#include<conio.h>
struct student
{
	int sno;
	char sname[20];
	float marks;
};
void main()
{
clrscr();
student s;
student s1={101,"kris",56.65};
student a;
a.sno=102;
strcpy(a.sname,"sam");
a.marks=77.56;
s=a;
cout<<"S1 Structure Details are"<<endl;
cout<<"S1.SNO = "<<s1.sno<<endl;
cout<<"S1.SNAME = "<<s1.sname<<endl;
cout<<"S1.MARKS = "<<s1.marks<<endl;
cout<<"A Structure Details are"<<endl;
cout<<"A.SNO = "<<a.sno<<endl;
cout<<"A.SNAME = "<<a.sname<<endl;
cout<<"A.MARKS = "<<a.marks<<endl;
cout<<"S Structure Details are"<<endl;
cout<<"S.SNO = "<<s.sno<<endl;
cout<<"S.SNAME = "<<s.sname<<endl;
cout<<"S.MARKS = "<<s.marks<<endl;
getch();
}