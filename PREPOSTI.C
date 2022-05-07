#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x,y;
clrscr();
i=5;
//x=i++;
//i++=i=i+1;
//x=i=i+1;
//x=i;	i=i+1;
x=i++;
printf("X value =  %d\n",x);
printf("I value = %d\n",i);
j=5;
//y=++j;
//++j=j+1=j;
//y=j+1=j;
//y=j+1; j+1=j;
//y=j+1; j=j+1;
y=++j;
printf("Y value = %d\n",y);
printf("J value = %d\n",j);
getch();

}