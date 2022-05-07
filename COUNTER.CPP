#include<iostream.h>
#include<conio.h>
class counter
{
private:
	unsigned int count;
public:
	counter() { count=0; }

	void inc_count() { count++; }

	int getcount() { return count; }
};
void main()
{
counter c1,c2;
clrscr();
cout<<endl<<"C1 = "<<c1.getcount();
cout<<endl<<"C2 = "<<c2.getcount();
c1.inc_count();
c2.inc_count();
c2.inc_count();
cout<<endl<<"C1 = "<<c1.getcount();
cout<<endl<<"C2 = "<<c2.getcount();
getch();
}