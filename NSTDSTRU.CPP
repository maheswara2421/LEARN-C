//prg using nested structures
#include<stdio.h>
#include<conio.h>
struct distance
{
	int feet;
	float inches;
};
struct room
{
	distance length;
	distance width;
};
void main()
{
room r;
clrscr();
printf("Enter length in feet");
scanf("%d",&r.length.feet);
printf("Enter length in inches");
scanf("%f",&r.length.inches);
printf("Enter width in feet");
scanf("%d",&r.width.feet);
printf("Enter width in inches");
scanf("%f",&r.width.inches);
float l=r.length.feet+r.length.inches/12;
float w=r.width.feet+r.width.inches/12;
printf("Room Area = %f\n",l*w);
getch();
}