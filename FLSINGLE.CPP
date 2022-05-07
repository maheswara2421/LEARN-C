#include<fstream.h>
#include<conio.h>
void main()
{
ofstream outf("ITEM");
cout<<"Enter Product name";
char name[20];
cin>>name;
outf<<name<<endl;
cout<<"Enter Product Cost";
float cost;
cin>>cost;
outf<<cost<<endl;
outf.close();
ifstream inf("ITEM");
inf>>name;
inf>>cost;
cout<<endl;
cout<<"Item Name = "<<name<<endl;
cout<<"Item Cost = "<<cost<<endl;
inf.close();
getch();
}
