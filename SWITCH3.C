#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter N value");
scanf("%d",&n);
switch(n)
{
	case 1:
		printf("ONE");
		break;
	case 2:
		printf("TWO");
		break;
	case 3:
		printf("THREE");
		break;
	case 4:
		printf("FOUR");
		break;
	case 5:
		printf("FIVE");
		break;
	case 6:
		printf("SIX");
		break;
	case 7:
		printf("SEVEN");
		break;
	case 8:
		printf("EIGHT");
		break;
	case 9:
		printf("NINE");
		break;
	default:
		printf("Plz Enter values Between 1 and 9");
}
getch();
}