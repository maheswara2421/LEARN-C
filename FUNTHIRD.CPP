//calling one function from another
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
void first()
{
cout<<"This is First"<<endl;
third();
}
void second()
{
cout<<"This is Second"<<endl;
}
void third()
{
cout<<"This is Third"<<endl;
second();
}