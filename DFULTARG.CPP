//functions with default arguments
#include<iostream.h>
#include<conio.h>
void repchar(char='*',int=45);
void main()
{
clrscr();
repchar();
repchar('+');
repchar('/',50);
getch();
}
void repchar(char ch,int n)
{
for(int i=1;i<=n;i++)
	cout<<ch;
	cout<<endl;
}