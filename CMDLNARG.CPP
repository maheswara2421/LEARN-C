#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
void main(int argc,char *argv[])
{
int num[]={11,22,33,44,55,66,77,88,99};
if(argc!=3)
{
	cout<<"Argc = "<<argc<<endl;
	cout<<"Error in Arguments"<<endl;
	exit(1);
}
ofstream fout1,fout2;
fout1.open(argv[1]);
if(fout1.fail())
{
	cout<<"Could Not Open the File"<<argv[1]<<endl;
	exit(1);
}
fout2.open(argv[2]);
if(fout2.fail())
{
	cout<<"Could Not Open the File"<<argv[2]<<endl;
	exit(1);
}
for(int i=0;i<9;i++)
{
	if(num[i]%2==0)
		fout2<<num[i]<<" ";
	else
		fout1<<num[i]<<" ";
}
fout1.close();
fout2.close();
ifstream fin;
char ch;
for(i=1;i<argc;i++)
{
	fin.open(argv[i]);
	cout<<"Contents of "<<argv[i]<<endl;
	do
	{
	 fin.get(ch);
	 cout<<ch;
	}
	while(fin);
	 cout<<"\n\n";
	 fin.close();
}
getch();
}