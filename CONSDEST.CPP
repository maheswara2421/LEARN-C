#include<iostream.h>
#include<conio.h>
class emp
{
public:
	emp()
	{
		cout<<"Its Constructor Invoked"<<endl;
	}
	~emp()
	{
		cout<<"Its Destructor Invoked"<<endl;
	}
};
void main()
{
clrscr();
   emp e;
   {
	emp e1,e2;
	{
		emp e3,e4;
	}
   }
}