#include<iostream.h>
#include<conio.h>
class counter
{
private:
	int count;
public:
	counter()
	{
	   count=0;
	}
	int getcount()
	{
	   return count;
	}
	counter operator ++()
	{
	   counter temp;
	   count ++;
	   temp.count = count;
	   return temp;
	}
	counter operator ++(int)
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
c1++;
cout<<endl<<"c1="<<c1.getcount();
++c2;
cout<<endl<<"c2="<<c2.getcount();
counter c3;
c3=++c1;
cout<<endl<<"c1="<<c1.getcount();
cout<<endl<<"c3="<<c3.getcount();
counter c4;
c4=c2++;
cout<<endl<<"c2="<<c2.getcount();
cout<<endl<<"c4="<<c4.getcount();
getch();
}