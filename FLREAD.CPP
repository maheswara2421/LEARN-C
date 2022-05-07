#include<fstream.h>
#include<conio.h>
void main()
{
char name[20];
float cost;
ifstream inf("ITEM");
inf>>name;
inf>>cost;
cout<<endl;
cout<<"Item Name = "<<name<<endl;
cout<<"Item Cost = "<<cost<<endl;
inf.close();
getch();
}
