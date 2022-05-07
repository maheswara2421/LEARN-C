#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int a[10][10],m,n,i,j;
cout<<"ener size of matrix A"<<endl;
cin>>m>>n;
if(m==n)
{
 cout<<"enter the elements of matrix A"<<endl;
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=n;j++)
  cin>>a[i][j];
 }
 cout<<"elemts of given matrix A are"<<endl;
 for(i=1;i<=m;i++)
 {
  for (j=1;j<=n;j++)
  cout<<setw(3)<<a[i][j];
  cout<<endl;
 }
 cout<<endl<<"diagonal elements of matrix A are"<<endl;
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(i==j)
   cout<<setw(3)<<a[i][j];
  }
 }
 cout<<endl<<"above diagonal elemnts of matrix A are"<<endl;
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(i<j)
   cout<<setw(3)<<a[i][j];
  }
 }
 cout<<endl<<"below diagonal elemens of matrix A are"<<endl;
 for(i=1;i<=m;i++)
 {
 for(j=1;j<=n;j++)
  {
  if(i>j)
  cout<<setw(3)<<a[i][j];
  }
 }
 }
 else
  cout<<"Its not a square matrix";
 getch();
}

