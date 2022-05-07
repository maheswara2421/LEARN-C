#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
private:
	int sno;
	char sname[20];
public:
	void getdata(int sn,char snm[20])
	{
		sno=sn;
		strcpy(sname,snm);
	}
	void putdata()
	{
		cout<<"Student Number = "<<sno<<endl;
		cout<<"Student Name = "<<sname<<endl;
	}
};
void main()
{
student s;
clrscr();
s.getdata(101,"kiran");
s.putdata();
getch();
}