//functions with arguments with returning values
#include<iostream.h>
#include<conio.h>
int add(int,int);
void main()
{
clrscr();
cout<<"Enter A value";
int a;
cin>>a;
cout<<"Enter B value";
int b;
cin>>b;
int k=add(a,b);
cout<<"Sum of "<<a<<" and "<<b<<" values are "<<k<<endl;
getch();
}
int add(int x,int y)
{
int z=x+y;
return(z);
}


