#include<fstream.h>
#include<conio.h>
void main()
{
ofstream outf("table");
cout<<"Enter Product name";
char name[20];
cin>>name;
outf<<name<<endl;
cout<<"Enter Product Cost";
float cost;
cin>>cost;
outf<<cost<<endl;
outf.close();
}
