#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
FILE *fp;
clrscr( );
printf("\n contents read:");
fp=fopen("test.txt","r");
if(fp==NULL)
{
printf("cannot open file");
exit(1);
}
while(!feof(fp))
printf("%c",getc(fp));
getch();
}