#include<iostream.h>
#include<conio.h>
inline float area(float l,float w)
{
	return(l*w);
}
void main()
{
float length,width;
clrscr();
cout<<"Enter Room Length";cin>>length;
cout<<"Enter Room Width";cin>>width;
cout<<"Area of Room = "<<area(length,width);
getch();
}