#include<iostream.h>
#include<conio.h>
void main()
{
int n,x,d,rev;
clrscr();
cout<<"enter n value";
cin>>n;
x=n;
while(n!=0)
{
  d=n%10;
  rev=rev*10+d;
  n=n/10;
}
cout<<"reverse of"<<x<<"given number is"<<rev<<endl;
getch();
}
