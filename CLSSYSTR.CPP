#include<iostream.h>
#include<conio.h>
#include<string.h>
const int SZ = 80;
class string
{
private:
	char st[SZ];
public:
	string()
	{
		st[0]='\0';
	}
	string(char *s)
	{
		strcpy(st,s);
	}
	void display()
	{
	   cout<<st<<endl;
	}
	operator char*()
	{
		return st;
	}
};
void main()
{
clrscr();
string s1;
char str[30];
strcpy(str,"Sachin Tendulkar");
s1=str;
s1.display();
string s2="Kapil Dev";
strcpy(str,s2);
cout<<str;
getch();
}