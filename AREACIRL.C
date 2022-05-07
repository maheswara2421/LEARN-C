/*PRG TO PRINT AREA OF CIRCLE*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
float r, area;
printf("Enter radius");
scanf("%f",&r);
area=PI*r*r;
printf("Area of circle=%f\n",area);
getch();
}