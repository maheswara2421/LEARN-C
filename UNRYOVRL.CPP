#include<iostream.h>
#include<conio.h>
class counter
{
private:
	unsigned int count;
public:
	counter()
	{
		count=0;
	}
	int getcount()
	{
		return count;
	}
	counter operator ++()   //pre increment operator
	{
		counter temp;
		count++;
		temp.count=count;
		return temp;
	}
	counter operator ++(int) //post increment operator
	{
		counter temp;
		temp.count=count;
		count++;
		return temp;
	}
};
void main()
{
counter c1,c2;
clrscr();
c1++; //post increment operator
cout<<endl<<"C1 = "<<c1.getcount();
++c2;	//pre increment operator
cout<<endl<<"C2 = "<<c2.getcount();
counter c3;
c3=++c1;
cout<<endl<<"C1 = "<<c1.getcount();
cout<<endl<<"C3 = "<<c3.getcount();
counter c4;
c4=c2++;
cout<<endl<<"C2 = "<<c2.getcount();
cout<<endl<<"C4 = "<<c4.getcount();
getch();
}