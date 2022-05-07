#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,m,n,a[20][20];
clrscr();
cout<<"enter row and coloumn size"<<endl;
cin>>m>>n;
cout<<"enter the elements of given matrix";
for(i=1;i<=m;i++)
{
 for(j=1;j<=n;j++)
 {
  cin>>a[i][j];
 }
}
cout<<"the matri elements are"<<endl;
for(i=1;i<=m;i++)
{
 for(j=1;j<=n;j++)
 {
  cout<<a[i][j]<<" ";
 }
cout<<endl;
}
cout<<"Reverse of given matri is"<<endl;
for(j=1;j<=n;j++)
{
 for(i=1;i<=m;i++)
 {
  cout<<a[i][j]<<" ";
 }
cout<<endl;
}
getch();
}



