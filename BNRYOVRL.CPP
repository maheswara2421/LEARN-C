#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
const int max=80;
class string
{
private:
	char st[max];
public:
	string()
	{
		st[0] = '\0';
	}
	string(char *s)
	{
		strcpy(st,s);
	}
	void getdata()
	{
		cout<<"Enter a string";
		cin>>st;
	}
	void putdata()
	{
		cout<<"string is "<<st<<endl;
	}
	string operator +(string s2)
	{
		if(strlen(st)+strlen(s2.st)>max)
			cout<<"Concatenation is Not possible";
		else
			strcat(st,s2.st);
		return string(st);
	}
};
void main()
{
string s1("BITS");
string s2(" PILANI");
string s3;
clrscr();
s1.putdata();
s2.putdata();
s3=s1+s2;
s3.putdata();
getch();
}