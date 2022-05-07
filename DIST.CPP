#include<iostream.h>
#include<conio.h>
class distance
{
private:
	int feet;
	float inches;
public:
	distance()
	{
		feet=0;
		inches=0.0;
	}
	distance(int ft,float inch)
	{
		feet=ft;inches=inch;
	}
	void getdist()
	{
		cout<<"Enter feet";cin>>feet;
		cout<<"Enter inches";cin>>inches;
	}
	void showdist()
	{
		cout<<feet<<"\'-"<<inches<<"\""<<endl;
	}
};
void main()
{
distance dist1(11,6.25);
distance dist2;
clrscr();
dist2.getdist();
cout<<"Dist1 = ";dist1.showdist();
cout<<"Dist2 = ";dist2.showdist();
getch();
}
