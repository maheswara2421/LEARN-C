//functions calling using Variables
#include<iostream.h>
#include<conio.h>
void display(char,int);
void main()
{
clrscr();
char ch1;
int x;
cout<<"Enter ch1 charcater";cin>>ch1;
cout<<"Enter x value";cin>>x;
display(ch1,x);
getch();
}
void display(char ch,int n)
{
for(int i=1;i<=n;i++)
cout<<ch;
cout<<endl;
}
