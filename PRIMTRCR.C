/*prg to find area & perimeter of a circle */
#include<stdio.h>
#include<conio.h>
const float PI=3.143; /*#define PI 3.14 */
void main()
{
int r;
float area,permtr;
clrscr();
printf("Enter the radius of a circle");
scanf("%d",&r);
area=PI*r*r;
permtr=2*PI*r;
printf("Area of given Circle = %.3f\n",area);
printf("Perimeter of Given Circle = %.3f",permtr);
getch();
}