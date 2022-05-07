#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"Enter The size of Array A";
int n;
cin>>n;
cout<<"Enter The elements of given array A";
int a[20];
for(int i=1;i<=n;i++)
cin>>a[i];
for(i=0;i<=n;i++)
cout<<"The given Array elements are "<<"a[" <<i<<"] = "<<a[i]<<endl;
getch();
}
