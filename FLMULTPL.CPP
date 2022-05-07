#include<fstream.h>
#include<conio.h>
void main()
{
ofstream fout;
clrscr();
fout.open("country");
fout<<"United States Of America"<<endl;
fout<<"United Kingdom"<<endl;
fout<<"West Indies"<<endl;
fout.close();
fout.open("capital");
fout<<"Washington"<<endl;
fout<<"London"<<endl;
fout<<"Jamica"<<endl;
fout.close();
const int N = 80;
char line[N];
ifstream fin;
fin.open("country");
cout<<"Content of Country file"<<endl;
while(fin)
{
	fin.getline(line,N);
	cout<<line<<endl;
}
fin.close();
fin.open("capital");
cout<<endl<<"Contents of Capital File "<<endl;
while(fin)
{
	fin.getline(line,N);
	cout<<line<<endl;
}
fin.close();
getch();
}