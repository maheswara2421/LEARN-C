//functions calling
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
cout<<"This is Second Function"<<endl;
}
void first()
{
cout<<"This is First Function"<<endl;
}
void third()
{
cout<<"This is Third Function"<<endl;
}