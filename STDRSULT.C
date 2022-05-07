#include<stdio.h>
#include<conio.h>
void main()
{
int sno,tot,m1,m2;
char sname[20],grade[20],result[20];
float avg;
clrscr();
printf("Enter student Roll Number");
scanf("%d",&sno);
printf("Enter student Name");
scanf("%s",sname);
printf("Enter marks in m1 and m2 subjects");
scanf("%d%d",&m1,&m2);
tot=m1+m2;
avg=(float)tot/2;
if(m1>35 && m2>35)
{
	strcpy(result,"PASS");
	if(avg>=80)
		strcpy(grade,"DISTINCITION");
else
	if(avg>=70)
		strcpy(grade,"FIRST");
else
	if(avg>=60)
		strcpy(grade,"SECOND");
else
	if(avg>=50)
		strcpy(grade,"THIRD");
else
	if(avg>35)
		strcpy(grade,"FOURTH");
}
else
{
	strcpy(result,"FAIL");
	strcpy(grade,"NIL");
}
printf("Student Number = %d\n",sno);
printf("Student Name = %s\n",sname);
printf("marks in M1 = %d\n",m1);
printf("Marks in M2 = %d\n",m2);
printf("Total Marks = %d\n",tot);
printf("Average Marks = %f\n",avg);
printf("Student Result = %s\n",result);
printf("Student Grade = %s\n",grade);
getch();
}