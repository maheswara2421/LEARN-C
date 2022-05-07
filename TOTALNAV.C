#include<stdio.h>
#include<conio.h>
void main()
{
int sno,s1,s2,Tot;
char sname[20];
float avg;
clrscr();
printf("Enter student number, student name, subject1, subject2, total");
scanf("%d%s%d%d",&sno,&sname,&s1,&s2);
Tot=s1+s2;
avg=(float)Tot/2;
printf("sno=%d\nsname=%s\ns1=%d\ns2=%d\n",sno,sname,s1,s2);
printf("Totalmarks=%d\navg=%f\n",Tot,avg);
getch();
}