#include<iostream.h>
#include<conio.h>
template <class T>
class sample
{
private:
	T v1,v2;
public:
	void getdata()
	{
		cout<<"Enter frist value";cin>>v1;
		cout<<"Enter second value";cin>>v2;
	}
	void sum()
	{
		T res;
		res=v1+v2;
		cout<<"Total = "<<res<<endl;
	}
};
void main()
{
clrscr();
sample <int> intobj;
//cout<<"Enter two integers";
intobj.getdata();
intobj.sum();
sample <float> fltobj;
//cout<<"Enter Two Float values";
fltobj.getdata();
fltobj.sum();
sample <char> chobj;
//cout<<"Enter two characters";
chobj.getdata();
chobj.sum();
getch();
}
