#include<iostream.h>
#include<conio.h>
class beta;
class alpha
{
private:
	int a;
public:
	alpha()
	{
		a=5;
	}
	friend int func(alpha,beta);
};
class beta
{
private:
	int b;
public:
	beta()
	{
		b=8;
	}
	friend int func(alpha,beta);
};
int func(alpha x,beta y)
{
	return(x.a*y.b);
}
void main()
{
alpha aobj;
beta bobj;
clrscr();
cout<<"Multiplication of two Data members = "<<func(aobj,bobj);
getch();
}
