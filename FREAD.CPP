#include<fstream.h>
#include<conio.h>
void main()
{
ifstream inf("table");
char name[20];
float cost;
inf>>name;
inf>>cost;
cout<<endl;
cout<<"Item Name = "<<name<<endl;
cout<<"Item Cost = "<<cost<<endl;
inf.close();
getch();
}
