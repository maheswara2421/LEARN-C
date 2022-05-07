#include<iostream.h>
#include<conio.h>
void swap(int,int);
void main()
{
clrscr();
cout<<"Enter A and B values";
int a,b;
cin>>a>>b;
cout<<"Before Swapping A = "<<a<<" B = "<<b<<endl;
swap(a,b); // a and b are actual arguments
cout<<"After Swapping A = "<<a<<" B = "<<b<<endl;
getch();
}
void swap(int x,int y) //x and y are formal arguments
{
int t;
t=x;
x=y;
y=t;
cout<<"Swapped Values are X = "<<x<<" Y = "<<y<<endl;
}