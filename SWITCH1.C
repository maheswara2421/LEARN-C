#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character(r,g,b)\n");
ch=getchar();
switch(ch)
{
	case 'r':
		textcolor(LIGHTRED+BLINK+YELLOW);
		cprintf("SVINFOTECH");
		break;
	case 'g':
		textcolor(LIGHTGREEN+BLINK);
		cprintf("Learn .NET,C,C++");
		break;
	case 'b':
		textcolor(LIGHTBLUE+BLINK);
		cprintf("TRAINING & DEVELOPMENT");
		break;
	default:
		textcolor(LIGHTCYAN);
		cprintf("DILSUKHNAGAR,HYDERABAD");
		break;
}
getch();
}