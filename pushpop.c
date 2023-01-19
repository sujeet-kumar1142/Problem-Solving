#include<stdio.h>
int stack[5];
max=5;
int top=-1;
void push(int size,int value)
{
	if(top==max-1)
	{
		printf("overflow");
	}
	else
	{
		top=top+1;
		stack[top]=value;
		printf("%d inserted at %d\n",value,top);
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
		printf("top element deleted\n");
	}
}
void main()
{

		push(5,8);
		push(4,90);
		pop(3,6);
}
