//functions with arguments without returning values
#include<iostream.h>
#include<conio.h>
void add(int,int);
void main()
{
cout<<"Enter A value";
int a;
cin>>a;
cout<<"Enter B value";
int b;
cin>>b;
add(a,b);
getch();
}
void add(int x,int y)
{
int z=x+y;
cout<<"Sum of "<<x<<" and "<<y<<" values are "<<z<<endl;
}


