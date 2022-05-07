#include<iostream.h>
#include<conio.h>
void repchar();
void repchar(char);
void repchar(char,int);
void main()
{
clrscr();
	repchar();
	repchar('=');
	repchar('+',45);
	getch();
}
void repchar()
{
	for(int i=1;i<=50;i++)
		cout<<"*";
		cout<<endl;
}
void repchar(char ch)
{
	for(int i=1;i<=50;i++)
		cout<<ch;
		cout<<endl;
}
void repchar(char ch,int n)
{
	for(int i=1;i<=n;i++)
		cout<<ch;
		cout<<endl;
}