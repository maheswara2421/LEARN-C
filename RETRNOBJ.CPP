#include<iostream.h>
#include<conio.h>
class distance
{
private:
	int feet;
	float inches;
public:
	distance()
	{  feet=0; inches=0.0; }

	distance(int ft,float inch)
	{
		feet=ft; inches=inch;
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
	distance add_dist(distance);
};
distance distance :: add_dist(distance d2)
{
	distance temp;
	temp.feet=0;
	temp.inches=inches+d2.inches;
	while(temp.inches>12.0)
	{
		temp.feet++;
		temp.inches-=12.0;
	}
	temp.feet+=feet+d2.feet;
	return temp;
}
void main()
{
distance dist1,dist3;
distance dist2(11,6.25);
clrscr();
dist1.getdist();
dist3=dist1.add_dist(dist2);
cout<<"Dist1 = ";dist1.showdist();
cout<<"Dist2 = ";dist2.showdist();
cout<<"Dist3 = ";dist3.showdist();
getch();
}