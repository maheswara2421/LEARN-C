#include<stdio.h>
#include<conio.h>

void main()
{
 char *str[88];
 int i,n;
 clrscr();

 printf("Enter the value of n:");
 scanf("%d",&n);

  for(i=0;i<n;i++)
  {
   printf("\nEnter the %d th Element",i);
   scanf("%s",(str[i]));
   printf("%s",*(str+i));
   }
   printf("%c",str[0]+1);
   printf("\n Output");

   for(i=0;i<n;i++)
   {
    printf("\n%s",*(str+i));
   }
    getch();
  }
