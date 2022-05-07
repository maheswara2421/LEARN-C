#include<iostream.h>
#include<conio.h>
class base
{
	public:
		virtual void show()
		{
			cout<<"Base Class"<<endl;
		}
};
class derv1:public base
{
	public:
		void show()
		{
			cout<<"Dervied1 class"<<endl;
		}
};
class derv2:public base
{
	public:
		void show()
		{
			cout<<"Dervied2 Class"<<endl;
		}
};
void main()
{
derv1 dv1;
derv2 dv2;
base *ptr;
clrscr();
ptr=&dv1;
ptr->show();
ptr=&dv2;
ptr->show();
getch();
}