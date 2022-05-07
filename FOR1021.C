/*prg to print numbers from N to 1 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter N value");
scanf("%d",&n);
for(i=n;i>=1;i--)
	printf("i value = %d\n",i);
getch();
}