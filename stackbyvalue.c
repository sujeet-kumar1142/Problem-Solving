#include<stdio.h>
#define size 5
top=-1;
int stack[size];
void push(int a)
{
	if(top==size-1)
	{
		printf("overflow");
	}
	else
	{
		top=top+1;
		stack[top]=a;
	}
}
void pop()
{
	if(top==-1)	
	{
		printf("underflow");
	}
	else
	{
		top=top-1;
	}
}
void main()
{
	push(10);
	push(11);
	push(56);
	push(45);
	pop();
}
