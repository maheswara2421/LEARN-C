#include<iostream.h>
#include<conio.h>
class distance
{
private:
	int feet;
	float inches;
public:
	void setdist(int ft,float inch)
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
distance dist1,dist2;
clrscr();
dist1.setdist(11,6.25);
dist2.getdist();
cout<<"Dist1 = ";dist1.showdist();
cout<<"Dist2 = ";dist2.showdist();
getch();
}
