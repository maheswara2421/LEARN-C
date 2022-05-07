//convsrsions Distance to Meters and Meters to Distance
#include<iostream.h>
#include<conio.h>
const int MTF = 3.280833;
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
	distance(float meters)
	{
		float fltfeet=MTF*meters;
		feet=int(fltfeet);
		inches=12*(fltfeet-feet);
	}
	distance(int ft,float inch)
	{
		feet=ft;
		inches=inch;
	}
	void getdist()
	{
		cout<<"Enter Feet";cin>>feet;
		cout<<"Enter Inches";cin>>inches;
	}
	void showdist()
	{
	    cout<<feet<<"\'-"<<inches<<"\""<<endl;
	}
	operator float()
	{
		float fracfeet=inches/12;
		fracfeet+=float(feet);
		return fracfeet/MTF;
	}
};
void main()
{
clrscr();
float mtrs;
distance dist1=2.35;
cout<<"dist1 = ";dist1.showdist();
dist1=1.00;
cout<<"dist1 = ";dist1.showdist();
distance dist2(5,10.25);
mtrs=dist2;
cout<<"dist2 = "<<mtrs<<" Meters"<<endl;
mtrs=dist1;
cout<<"dist1 = "<<mtrs<<" Meters"<<endl;
getch();
}