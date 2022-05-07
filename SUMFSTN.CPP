//prg to print 1 to n numbers using for loop
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
cout<<"Enter n value";
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++)
{
	sum=sum+i;
	cout<<"Sum = "<<sum<<endl;
}
getch();
}

