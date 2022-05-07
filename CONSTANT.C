#include<stdio.h>
#include<conio.h>
#define PI (3.1428)
void main()
{
float area;
int a,b,c,s,x,areaT;
clrscr();
printf("side a=");
scanf("%d",&a);
printf("side b=");
scanf("%d",&b);
printf("side c=");
scanf("%d",&c);
s=(a+b+c)/2;
printf("%d",s);
x=s*(s-a)*(s-b)*(s-c);
printf("%d",x);
areaT=pow(x,0.5);
area=pow(x,0.5);
printf("Area of Triangle =%d\n",areaT);
printf("Area of Triangle =%f\n",area);
printf("Perimeter of Triangl =%d\n",2*s);
getch();
}