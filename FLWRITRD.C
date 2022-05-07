#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
FILE *fp;
char c='/';
clrscr( );
fp=fopen("test.txt","w");
if(fp==NULL)
{
printf("cannot open file");
exit(1);
}
printf("write data & to stop press '.':");
while(c!='.')
{
c=getche();
fputc(c,fp);
}

fclose(fp);
printf("\n contents read:");
fp=fopen("test.txt","r");
while(!feof(fp))
printf("%c",getc(fp));
getch();
}