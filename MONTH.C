#include<stdio.h>
#include<conio.h>
main(){
int days,months;
clrscr();
printf("enter no. of days:");
scanf("%d",&days);
months=days/30;
days=days%30;
printf("months:%d",months);
printf("days:%d",days);
getch();
}