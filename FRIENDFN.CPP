#include<iostream.h>
#include<conio.h>
class beta;
class alpha
{
private:
	int a1;
public:
	alpha()
	{
		a1=5;
	}
	friend int frfunc(alpha,beta);
};
class beta
{
private:
	int b1;
public:
	beta()
	{
		b1=7;
	}
	friend int frfunc(alpha,beta);
};
int frfunc(alpha x, beta y)
{
	return(x.a1*y.b1);
}
void main()
{
alpha a;
beta b;
clrscr();
cout<<"Resultant value = "<<frfunc(a,b);
getch();
}