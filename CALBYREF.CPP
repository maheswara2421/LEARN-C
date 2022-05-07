#include<iostream.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
int a,b;
clrscr();
cout<<"Enter a and b values";
cin>>a>>b;
cout<<"Before Swapping A = "<<a<<" B = "<<b<<endl;
swap(&a,&b);
cout<<"After Swapping A = "<<a<<" B = "<<b<<endl;
getch();
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
cout<<"Swapped Values are *X = "<<*x<<" *Y = "<<*y<<endl;
}