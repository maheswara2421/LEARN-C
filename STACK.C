#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int stack[],int *top,int value)
{
	if(*top<MAX)
	{
		*top=*top+1;
		stack[*top]=value;
	}
	else
	{
		printf("The stack is Full Cannot Push a Value\n");
		exit(0);
	}
}
void pop(int stack[],int *top,int *value)
{
	if(*top>=0)
	{
		*value=stack[*top];
		*top=*top-1;
	}
	else
	{
		printf("The Stack is Empty Cannot Pop a Value\n");
		exit(0);
	}
}

void main()
{
int stack[MAX];
int top=-1;
int n,value;
do
{
	do
	{
		printf("Enter the elements to be Pushed\n");
		scanf("%d",&value);
		push(stack,&top,value);
		printf("Enter 1 to continue\n");
		scanf("%d",&n);
	}while(n==1);
	printf("Enter 1 to Pop an Element\n");
	scanf("%d",&n);
	while(n==1)
	{
		pop(stack,&top,&value);
		printf("The value Poped is %d\n",value);
		printf("Enter 1 to pop an element\n");
		scanf("%d",&n);
	}
	printf("Enter 1 to continue\n");
	scanf("%d",&n);
}while(n==1);
getch();
}