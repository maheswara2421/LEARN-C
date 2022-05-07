#include<iostream.h>
#include<conio.h>
template <class T>
void swap(T &x,T &y)
{
	T z=x;
	x=y;
	y=z;
cout<<"After swapping "<<endl<<"x = "<<x<<"y = "<<y<<endl;
}
void main()
{
clrscr();
cout<<"Enter two integers";
int m,n;
cin>>m>>n;
swap(m,n);
cout<<"Enter Two Float values";
float p,q;
cin>>p>>q;
swap(p,q);
getch();
}