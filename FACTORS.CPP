#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
 int n;
 clrscr();
 cout<<"enter n value";
 cin>>n;
 cout<<"factors of"<<n<<"given number are";
 for(int i=1;i<=n;i++)
 {
 if(n%i==0)
 cout<<setw(3)<<i;
 }
 getch();
 }
