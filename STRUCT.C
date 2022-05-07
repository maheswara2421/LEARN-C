#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int sno;
	char sname[20];
	int marks;
}s;
void main()
{
	struct student s1={101,"ramu",89};
	struct student s2;
	clrscr();
	s2.sno=102;
	strcpy(s2.sname,"kiran");
	s2.marks=75;
	s=s2;
	printf("S student Details are\n");
	printf("S.SNO = %d\n",s.sno);
	printf("S.SNAME = %s\n",s.sname);
	printf("S.MARKS = %d\n",s.marks);
	printf("S1 student Details are\n");
	printf("S1.SNO = %d\n",s1.sno);
	printf("S1.SNAME = %s\n",s1.sname);
	printf("S1.MARKS = %d\n",s.marks);
	printf("S2 student Details are\n");
	printf("S2.SNO = %d\n",s2.sno);
	printf("S2.SNAME = %s\n",s2.sname);
	printf("S2.MARKS = %d\n",s2.marks);
	getch();
}
