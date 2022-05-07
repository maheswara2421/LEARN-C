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
		feet=0;inches=0.0;
	}
	distance(int ft,float inch)
	{
		feet=ft;inches=inch;
	}
	void getdist()
	{
		cout<<"Enter feet";cin>>feet;
		cout<<"Enter Inches";cin>>inches;
	}
	void showdist()
	{
		cout<<feet<<"\'-"<<inches<<"\""<<endl;
	}
	void add_dist(distance,distance);
};
void distance :: add_dist(distance d1,distance d2)
{
	inches=d1.inches+d2.inches;
	feet=0;
	while(inches>=12.0)
	{
		feet++;
		inches-=12.0;
	}
	feet+=d1.feet+d2.feet;
}
void main()
{
distance dist1,dist3;
distance dist2(11,6.25);
clrscr();
dist1.getdist();
dist3.add_dist(dist1,dist2);
cout<<"Dist1 = ";dist1.showdist();
cout<<"Dist2 = ";dist2.showdist();
cout<<"Dist3 = ";dist3.showdist();
getch();
}