#include<stdio.h>
#define SIZE 5
struct student
{
	int stack [SIZE];
	int top;
};
void create(struct student s)
{
	s.top=-1;
}
void push(struct student s,int v)
{
	if(s.top=SIZE-1)
	printf("overflow");
}
int main()
