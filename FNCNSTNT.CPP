//functions calling using constant values
#include<iostream.h>
#include<conio.h>
void display(char,int);
void main()
{
clrscr();
display('g',45);
getch();
}
void display(char ch,int n)
{
for(int i=1;i<=n;i++)
cout<<ch;
cout<<endl;
}
