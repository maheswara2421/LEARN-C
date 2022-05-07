void table(int);
void main()
{
int n;
clrscr();
printf("Enter N value");
scanf("%d",&n);
table(n);	//n is actual argument
getch();
}
void table(n)
{
int i,res;
	for(i=1;i<=10;i++)
	{
		res=n*i;
		printf("%d * %d = %d\n",n,i,res);
	}
}