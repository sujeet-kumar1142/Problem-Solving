#include <stdio.h>
# define SIZE 10
int top1=-1;
int top2=SIZE;
int stack[SIZE];
void push1(int d)
{
    if(top1<top2-1)
    {
        top1++;
        stack[top1]=d;
        printf("%d\n",stack[top1]);
    }
    else
    {
        printf("stack overflow");
    }
}
void push2(int d)
{
    if(top1<top2-1)
    {
        top2--;
        stack[top2]=d;
        printf("%d \t", stack[top2]);
    }
    else
    {
        printf("stack overflow 2");
    }
}
void pop1()
{
    if(top1>=0)
    {
        int e=top1--;
        printf("element is poped");
    }
    else
    {
        printf("underflow 1");
    }
}
void pop2()
{
    if(top2<=SIZE)
    {
        int e=top2--;
        printf("element is poped");
    }
    else
    {
        printf("underflow 2");
        
    }
}

int main() {
    printf("enter the element\n");
    push1(90);
    push1(60);
    push1(50);
    push1(40);
    push1(30);
    push1(10);
    push2(70);
    push2(76);
    push2(78);
    push2(72);
    pop1();
    return 0;
}
