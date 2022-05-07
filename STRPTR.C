#include<conio.h>
#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
};
void display(struct emp a,struct emp *b);
void main()
{
struct emp e1={101,"kris"};
struct emp e2;
clrscr();
printf("Enter employee number");
scanf("%d",&e2.eno);
printf("Enter Employee name");
scanf("%s",e2.ename);
display(e1,&e2);
getch();
}
void display(struct emp a,struct emp *b)
{
printf("Employee number = %d\n",a.eno);
printf("Employee name = %s\n",a.ename);
printf("Employee number = %d\n",b->eno);
printf("Employee name = %s\n",b->ename);
}