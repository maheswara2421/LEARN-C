#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("Enter the year");
scanf("%d",&yr);
if((yr%4==0)&&((yr%100!=0)||(yr%400==0)))
	printf("Given Year is Leap Year = %d\n",yr);
else
	printf("Given Year is Not Leap Year = %d\n",yr);
getch();
}