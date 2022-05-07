#include<iostream.h>
#include<conio.h>
void first();
void second();
void third();
void main()
{
clrscr();
first();
second();
third();
getch();
}
void second()
{
	cout<<"Its Second Function"<<endl;
	third();
}
void third()
{
	cout<<"Its Third Function"<<endl;
}
void first()
{
	cout<<"Its First Function"<<endl;
	second();
}