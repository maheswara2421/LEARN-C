struct student
{
int sno,m1,m2;
char sname[10];
};
struct calculation
{
int tot;
float avg;
};
void main()
{
struct student s[20];
struct calculation c[20];
int i;
clrscr();
for(i=0;i<2;i++)
{
printf("Enter %d record elements sno,name,m1,m2",i+1);
scanf("%d%s%d%d",&s[i].sno,&s[i].sname,&s[i].m1,&s[i].m2);
}
for(i=0;i<2;i++)
{
c[i].tot=s[i].m1+s[i].m2;
c[i].avg=(float)c[i].tot/2;
}
for(i=0;i<2;i++)
printf("%d\t%.2f\n",c[i].tot,c[i].avg);
getch();
}
