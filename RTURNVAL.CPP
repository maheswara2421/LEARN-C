//functions without arguments and with returning values
#include<iostream.h>
#include<conio.h>
float add();
void main()
{
clrscr();
cout<<"Resultant value = "<<add()<<endl;
getch();
}
float add()
{
cout<<"Enter x value";
float x;
cin>>x;
cout<<"Enter y value";
float y;
cin>>y;
float z=x+y;
return z;
}


