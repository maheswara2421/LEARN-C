#include<iostream.h>
#include<conio.h>
class counter
{
private:
	unsigned int count;
public:
	counter()
	{ count = 0; }
	int getcount()
	{
		return count;
	}
	void operator ++() //pre increment
	{
		count++;
	}
	void operator ++(int) //post increment
	{
		count++;
	}
};
void main()
{
counter c1,c2;
clrscr();
c1++;
cout<<"C1 = "<<c1.getcount();
++c2;
cout<<"C2 = "<<c2.getcount();
getch();
}

