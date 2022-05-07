/*PRG TO ACCEPT EMPLOYEE DETAILS*/
#include<stdio.h>
#include<conio.h>
void main()
{
int eno;
char ename[20];
float basic,da,hra,ded,netsal;
clrscr();
printf("Enter employee number");
scanf("%d",&eno);
printf("Enter employ name");
scanf("%s",ename);
printf("enter employee basic");
scanf("%f",&basic);
  da=0.15*basic;
  hra=0.10*basic;
  ded=0.20*basic;
  netsal=basic+da+hra-ded;
printf("Employee number=%d\nemployee name=%s\nemployee basic=%.2f\nemployee house rent allowance=%.2f\nemployee daily allowance=%.2f\nemployee deductions=%.2f\n employee netsalary=%.2f\n",eno,ename,basic,hra,da,ded,netsal);
getch();
}