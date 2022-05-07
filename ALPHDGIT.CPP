#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
cout<<"Enter a letter"<<endl;
cin>>ch;
if(isalpha(ch))
	cout<<"Its Alphabet"<<endl;
else
if(isdigit(ch))
	cout<<"Its Numeric"<<endl;
else
	cout<<"Its Alpha Numeric"<<endl;
getch();
}