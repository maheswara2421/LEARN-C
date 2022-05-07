//function to swap arguments using call by value
#include<iostream.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
clrscr();
cout<<"Enter a value";cin>>a;
cout<<"Enter b value";cin>>b;
cout<<"BEFORE SWAPPING A = "<<a<<" B = "<<b<<endl;
swap(&a,&b);
cout<<"AFTER SWAPPING A = "<<a<<" B = "<<b<<endl;
getch();
}
void swap(int *x,int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
cout<<"SWAPPED Values are X = "<<*x<<" Y = "<<*y<<endl;
}